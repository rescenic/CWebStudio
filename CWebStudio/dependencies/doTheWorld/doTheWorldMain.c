#pragma once
// USE  THIS FILE ONLY FOR PRODUCTION
// This file is part of the DoTheWorld project.
// Do not edit this file, it is automatically generated.
// See the README.md file for more information.
/*
MIT License

Copyright (c) 2023 Mateus Moutinho Queiroz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


#include "headers/imports.h"
#include "headers/string_array.h"
#include "headers/sha-256.h"
#include "headers/base64.h"
#include "headers/cJSON.h"
#include "headers/extras.h"
#include "headers/string_functions.h"
#include "headers/io.h"
#include "headers/listage_wrappers.h"
#include "headers/monodimension_listage.h"
#include "headers/multidimension_listage.h"
#include "headers/path.h"
#include "headers/transaction_report.h"
#include "headers/json_error.h"
#include "headers/tree_part.h"
#include "headers/tree.h"
#include "dependencies/sha-256.c"
#include "dependencies/cJSON.c"
#include "functions/base64.c"
#include "functions/extras.c"
#include "functions/string_functions.c"
#include "functions/io.c"
#include "functions/listage_wrappers.c"
#include "functions/monodimension_listage_linux.c"
#include "functions/monodimension_listage_win32.c"
#include "functions/multidimension_listage.c"
#include "structs/path.c"
#include "structs/string_array.c"
#include "structs/tree_part/tree_part.c"
#include "structs/tree_part/hardware_tree_part.c"
#include "structs/tree/tree.c"
#include "structs/tree/tree_finding.c"
#include "structs/json_error.c"
#include "structs/tree/json_tree.c"
#include "structs/transaction_report.c"