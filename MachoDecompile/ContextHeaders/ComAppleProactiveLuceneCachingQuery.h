// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENECACHINGQUERY_H
#define COMAPPLEPROACTIVELUCENECACHINGQUERY_H



#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchIndexSearcher.h"
#import "OrgApacheLuceneSearchWeight.h"

@interface ComAppleProactiveLuceneCachingQuery : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneSearchQuery *q_;
    OrgApacheLuceneSearchIndexSearcher *is_;
    OrgApacheLuceneSearchWeight *weightWithScores_;
    OrgApacheLuceneSearchWeight *weightWithoutScores_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 ;
-(void)setBoostWithFloat:(float)arg0 ;
-(float)getBoost;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)clone;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)toStringWithNSString:(id)arg0 ;
-(void)dealloc;


@end


#endif