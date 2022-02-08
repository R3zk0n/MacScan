// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_WEIGHTORDOCIDSET_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_WEIGHTORDOCIDSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchWeight.h"
#import "OrgApacheLuceneSearchDocIdSet.h"

@interface OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper_WeightOrDocIdSet : NSObject {
    OrgApacheLuceneSearchWeight *weight_;
    OrgApacheLuceneSearchDocIdSet *set_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchDocIdSet:(id)arg0 ;
-(void)dealloc;


@end


#endif