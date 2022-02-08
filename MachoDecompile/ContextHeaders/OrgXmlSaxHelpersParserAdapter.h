// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSPARSERADAPTER_H
#define ORGXMLSAXHELPERSPARSERADAPTER_H

@protocol OrgXmlSaxLocator;

#import <Foundation/Foundation.h>

#import "OrgXmlSaxHelpersNamespaceSupport.h"
#import "OrgXmlSaxHelpersParserAdapter_AttributeListAdapter.h"
#import "IOSObjectArray.h"
#import "OrgXmlSaxHelpersAttributesImpl.h"
#import "OrgXmlSaxXMLReader-Protocol.h"
#import "OrgXmlSaxDocumentHandler-Protocol.h"
#import "OrgXmlSaxEntityResolver-Protocol.h"
#import "OrgXmlSaxDTDHandler-Protocol.h"
#import "OrgXmlSaxContentHandler-Protocol.h"
#import "OrgXmlSaxErrorHandler-Protocol.h"
#import "OrgXmlSaxParser-Protocol.h"

@interface OrgXmlSaxHelpersParserAdapter : NSObject <OrgXmlSaxXMLReader, OrgXmlSaxDocumentHandler>

 {
    id<OrgXmlSaxLocator> *locator_;
    id<OrgXmlSaxEntityResolver> *entityResolver_;
    id<OrgXmlSaxDTDHandler> *dtdHandler_;
    id<OrgXmlSaxContentHandler> *contentHandler_;
    id<OrgXmlSaxErrorHandler> *errorHandler_;
    OrgXmlSaxHelpersNamespaceSupport *nsSupport_;
    OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *attAdapter_;
    BOOL parsing_;
    IOSObjectArray *nameParts_;
    id<OrgXmlSaxParser> *parser_;
    OrgXmlSaxHelpersAttributesImpl *atts_;
    BOOL namespaces_;
    BOOL prefixes_;
    BOOL uris_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgXmlSaxParser:(id)arg0 ;
-(void)setupWithOrgXmlSaxParser:(id)arg0 ;
-(void)setFeatureWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)getFeatureWithNSString:(id)arg0 ;
-(void)setPropertyWithNSString:(id)arg0 withId:(id)arg1 ;
-(id)getPropertyWithNSString:(id)arg0 ;
-(void)setEntityResolverWithOrgXmlSaxEntityResolver:(id)arg0 ;
-(id)getEntityResolver;
-(void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id)arg0 ;
-(id)getDTDHandler;
-(void)setContentHandlerWithOrgXmlSaxContentHandler:(id)arg0 ;
-(id)getContentHandler;
-(void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id)arg0 ;
-(id)getErrorHandler;
-(void)parseWithNSString:(id)arg0 ;
-(void)parseWithOrgXmlSaxInputSource:(id)arg0 ;
-(void)setDocumentLocatorWithOrgXmlSaxLocator:(id)arg0 ;
-(void)startDocument;
-(void)endDocument;
-(void)startElementWithNSString:(id)arg0 withOrgXmlSaxAttributeList:(id)arg1 ;
-(void)endElementWithNSString:(id)arg0 ;
-(void)charactersWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)ignorableWhitespaceWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)processingInstructionWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)setupParser;
-(id)processNameWithNSString:(id)arg0 withBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2 ;
-(void)reportErrorWithNSString:(id)arg0 ;
-(id)makeExceptionWithNSString:(id)arg0 ;
-(void)checkNotParsingWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif