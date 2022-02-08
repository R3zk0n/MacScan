// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENESCOREINTERCEPTWEIGHT_H
#define COMAPPLEPROACTIVELUCENESCOREINTERCEPTWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "ComAppleProactiveLuceneScoreInterceptTarget-Protocol.h"

@interface ComAppleProactiveLuceneScoreInterceptWeight : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchWeight *weight_;
    id<ComAppleProactiveLuceneScoreInterceptTarget> *target_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withComAppleProactiveLuceneScoreInterceptTarget:(id)arg1 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif