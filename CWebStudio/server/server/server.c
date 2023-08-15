

struct CwebSever * newCwebSever(int port ,CwebHttpResponse *(*request_handler)(CwebHttpRequest *request)){
    struct CwebSever *self = (struct  CwebSever*) malloc(sizeof (struct CwebSever));
    self->port = port;
    self->function_timeout = 30;
    self->client_timeout = 5;
    self->max_queue = 100;
    self->single_process = false;
    self->max_requests = 1000;

    self->use_static = true;
    self->use_cache = true;
    
    self->request_handler = request_handler;

    return self;
}


void CwebSever_start(CwebSever *self){
    if (self->single_process){

        private_cweb_run_server_in_single_process(
            self->port,
            self->request_handler,
            self->client_timeout,
            self->max_queue,
            self->use_static,
            self->use_cache
        );
    }

    else{
        private_cweb_run_server_in_multiprocess(
            self->port,
            self->request_handler,
            self->function_timeout,
            self->client_timeout,
            self->max_queue,
            self->max_requests,
            self->use_static,
            self->use_cache
        );
    }
}

void CwebSever_free(CwebSever *self){
    free(self);
}