// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSORT_H
#define ORGAPACHELUCENESEARCHSORT_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchSort : NSObject {
    IOSObjectArray *fields_;
}




-(id)init;
-(id)initWithOrgApacheLuceneSearchSortField:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchSortFieldArray:(id)arg0 ;
-(void)setSortWithOrgApacheLuceneSearchSortField:(id)arg0 ;
-(void)setSortWithOrgApacheLuceneSearchSortFieldArray:(id)arg0 ;
-(id)getSort;
-(id)rewriteWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 ;
-(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(BOOL)needsScores;
-(void)dealloc;
+(void)initialize;


@end


#endif