#ifndef DOM_HEADER_GUARD_
#define DOM_HEADER_GUARD_


/*
 * The Apache Software License, Version 1.1
 * 
 * Copyright (c) 1999-2000 The Apache Software Foundation.  All rights
 * reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 * 
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:  
 *       "This product includes software developed by the
 *        Apache Software Foundation (http://www.apache.org/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 * 
 * 4. The names "Xerces" and "Apache Software Foundation" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written 
 *    permission, please contact apache\@apache.org.
 * 
 * 5. Products derived from this software may not be called "Apache",
 *    nor may "Apache" appear in their name, without prior written
 *    permission of the Apache Software Foundation.
 * 
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 * 
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation, and was
 * originally based on software copyright (c) 1999, International
 * Business Machines, Inc., http://www.ibm.com .  For more information
 * on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 */

/*
 * $Log$
 * Revision 1.1  2001/04/03 00:14:26  andyh
 * Initial revision
 *
 * Revision 1.4  2000/04/25 20:29:32  aruna1
 * DOM_XMLDecl type node introduced to get the information of the
 * XML Declaration in a document and store it part of the tree
 *
 * Revision 1.3  2000/02/24 20:11:26  abagchi
 * Swat for removing Log from API docs
 *
 * Revision 1.2  2000/02/06 07:47:27  rahulj
 * Year 2K copyright swat.
 *
 * Revision 1.1.1.1  1999/11/09 01:08:46  twl
 * Initial checkin
 *
 * Revision 1.2  1999/11/08 20:44:12  rahul
 * Swat for adding in Product name and CVS comment log variable.
 *
 */

//
//  This is the primary header file for inclusion in application
//  programs using the C++ XML Document Object Model API.
//

#include <idom/IDOM_Attr.hpp>
#include <idom/IDOM_CDATASection.hpp>
#include <idom/IDOM_CharacterData.hpp>
#include <idom/IDOM_Comment.hpp>
#include <idom/IDOM_Document.hpp>
#include <idom/IDOM_DocumentFragment.hpp>
#include <idom/IDOM_DocumentType.hpp>
#include <idom/IDOM_DOMException.hpp>
#include <idom/IDOM_DOMImplementation.hpp>
#include <idom/IDOM_Element.hpp>
#include <idom/IDOM_Entity.hpp>
#include <idom/IDOM_EntityReference.hpp>
#include <idom/IDOM_NamedNodeMap.hpp>
#include <idom/IDOM_Node.hpp>
#include <idom/IDOM_NodeList.hpp>
#include <idom/IDOM_Notation.hpp>
#include <idom/IDOM_ProcessingInstruction.hpp>
#include <idom/IDOM_Text.hpp>
#include <idom/IDOM_XMLDecl.hpp>


#endif
