// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_IDFSTATS_H
#define ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_IDFSTATS_H

@class SimWeight;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchExplanation.h"

@interface OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats : SimWeight {
    NSString *field_;
    OrgApacheLuceneSearchExplanation *idf_;
    float queryNorm_;
    float queryWeight_;
    float queryBoost_;
    float value_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneSearchExplanation:(id)arg1 withFloat:(float)arg2 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(void)dealloc;


@end


#endif