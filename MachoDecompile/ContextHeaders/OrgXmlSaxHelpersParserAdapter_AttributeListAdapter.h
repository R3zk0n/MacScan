// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSPARSERADAPTER_ATTRIBUTELISTADAPTER_H
#define ORGXMLSAXHELPERSPARSERADAPTER_ATTRIBUTELISTADAPTER_H

@protocol OrgXmlSaxAttributeList;

#import <Foundation/Foundation.h>

#import "OrgXmlSaxHelpersParserAdapter.h"
#import "OrgXmlSaxAttributes-Protocol.h"

@interface OrgXmlSaxHelpersParserAdapter_AttributeListAdapter : NSObject <OrgXmlSaxAttributes>

 {
    OrgXmlSaxHelpersParserAdapter *this$0_;
    id<OrgXmlSaxAttributeList> *qAtts_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgXmlSaxHelpersParserAdapter:(id)arg0 ;
-(void)setAttributeListWithOrgXmlSaxAttributeList:(id)arg0 ;
-(int)getLength;
-(id)getURIWithInt:(int)arg0 ;
-(id)getLocalNameWithInt:(int)arg0 ;
-(id)getQNameWithInt:(int)arg0 ;
-(id)getTypeWithInt:(int)arg0 ;
-(id)getValueWithInt:(int)arg0 ;
-(int)getIndexWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(int)getIndexWithNSString:(id)arg0 ;
-(id)getTypeWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getTypeWithNSString:(id)arg0 ;
-(id)getValueWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getValueWithNSString:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif