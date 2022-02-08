// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHEXPLANATION_H
#define ORGAPACHELUCENESEARCHEXPLANATION_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneSearchExplanation : NSObject {
    BOOL match_;
    float value_;
    NSString *description__;
    id<JavaUtilList> *details_;
}




-(id)initWithBoolean:(BOOL)arg0 withFloat:(float)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3 ;
-(BOOL)isMatch;
-(float)getValue;
-(id)getDescription;
-(id)getSummary;
-(id)getDetails;
-(id)description;
-(id)toStringWithInt:(int)arg0 ;
-(id)toHtml;
-(void)dealloc;
+(id)matchWithFloat:(float)arg0 withNSString:(id)arg1 withJavaUtilCollection:(id)arg2 ;
+(id)matchWithFloat:(float)arg0 withNSString:(id)arg1 withOrgApacheLuceneSearchExplanationArray:(id)arg2 ;
+(id)noMatchWithNSString:(id)arg0 withJavaUtilCollection:(id)arg1 ;
+(id)noMatchWithNSString:(id)arg0 withOrgApacheLuceneSearchExplanationArray:(id)arg1 ;


@end


#endif