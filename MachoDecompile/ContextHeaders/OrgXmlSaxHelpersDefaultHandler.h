// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSDEFAULTHANDLER_H
#define ORGXMLSAXHELPERSDEFAULTHANDLER_H


#import <Foundation/Foundation.h>

#import "OrgXmlSaxEntityResolver-Protocol.h"
#import "OrgXmlSaxDTDHandler-Protocol.h"
#import "OrgXmlSaxContentHandler-Protocol.h"
#import "OrgXmlSaxErrorHandler-Protocol.h"

@interface OrgXmlSaxHelpersDefaultHandler : NSObject <OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxContentHandler, OrgXmlSaxErrorHandler>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)resolveEntityWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)notationDeclWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(void)unparsedEntityDeclWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 ;
-(void)setDocumentLocatorWithOrgXmlSaxLocator:(id)arg0 ;
-(void)startDocument;
-(void)endDocument;
-(void)startPrefixMappingWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)endPrefixMappingWithNSString:(id)arg0 ;
-(void)startElementWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withOrgXmlSaxAttributes:(id)arg3 ;
-(void)endElementWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(void)charactersWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)ignorableWhitespaceWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)processingInstructionWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)skippedEntityWithNSString:(id)arg0 ;
-(void)warningWithOrgXmlSaxSAXParseException:(id)arg0 ;
-(void)errorWithOrgXmlSaxSAXParseException:(id)arg0 ;
-(void)fatalErrorWithOrgXmlSaxSAXParseException:(id)arg0 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif