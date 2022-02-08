// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol OrgXmlSaxXMLReader


-(BOOL)getFeatureWithNSString:(id)arg0 ;
-(void)setFeatureWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)getPropertyWithNSString:(id)arg0 ;
-(void)setPropertyWithNSString:(id)arg0 withId:(id)arg1 ;
-(void)setEntityResolverWithOrgXmlSaxEntityResolver:(id)arg0 ;
-(id)getEntityResolver;
-(void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id)arg0 ;
-(id)getDTDHandler;
-(void)setContentHandlerWithOrgXmlSaxContentHandler:(id)arg0 ;
-(id)getContentHandler;
-(void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id)arg0 ;
-(id)getErrorHandler;
-(void)parseWithOrgXmlSaxInputSource:(id)arg0 ;
-(void)parseWithNSString:(id)arg0 ;

@end

