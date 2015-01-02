// Copyright (c) 2007-2012 CIYAM Pty. Ltd. ACN 093 704 539
// Copyright (c) 2012-2015 CIYAM Developers
//
// Distributed under the MIT/X11 software license, please refer to the file license.txt
// in the root project directory or http://www.opensource.org/licenses/mit-license.php.

#ifndef MAC_H
#  define MAC_H

#  ifndef HAS_PRECOMPILED_STD_HEADERS
#     include <string>
#  endif

std::string get_mac_addr( char sep = '\0', const char *p_name = 0 );

#endif

