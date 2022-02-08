// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCOREWEIGHT_H
#define ORGAPACHELUCENESEARCHCONSTANTSCOREWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"

@interface OrgApacheLuceneSearchConstantScoreWeight : OrgApacheLuceneSearchWeight {
    float queryNorm_;
    float queryWeight_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(float)score;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;


@end


#endif