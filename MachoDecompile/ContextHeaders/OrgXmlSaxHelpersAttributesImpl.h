// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSATTRIBUTESIMPL_H
#define ORGXMLSAXHELPERSATTRIBUTESIMPL_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "OrgXmlSaxAttributes-Protocol.h"

@interface OrgXmlSaxHelpersAttributesImpl : NSObject <OrgXmlSaxAttributes>

 {
    int length_;
    IOSObjectArray *data_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgXmlSaxAttributes:(id)arg0 ;
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
-(void)clear;
-(void)setAttributesWithOrgXmlSaxAttributes:(id)arg0 ;
-(void)addAttributeWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)setAttributeWithInt:(int)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 ;
-(void)removeAttributeWithInt:(int)arg0 ;
-(void)setURIWithInt:(int)arg0 withNSString:(id)arg1 ;
-(void)setLocalNameWithInt:(int)arg0 withNSString:(id)arg1 ;
-(void)setQNameWithInt:(int)arg0 withNSString:(id)arg1 ;
-(void)setTypeWithInt:(int)arg0 withNSString:(id)arg1 ;
-(void)setValueWithInt:(int)arg0 withNSString:(id)arg1 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(void)badIndexWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif