// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_H

@protocol JavaUtilConcurrentExecutorService, OrgApacheLuceneSearchQueryCache;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexIndexReader.h"
#import "OrgApacheLuceneIndexIndexReaderContext.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"
#import "JavaUtilList-Protocol.h"
#import "OrgApacheLuceneSearchQueryCachingPolicy-Protocol.h"

@interface OrgApacheLuceneSearchIndexSearcher : NSObject {
    OrgApacheLuceneIndexIndexReader *reader_;
    OrgApacheLuceneIndexIndexReaderContext *readerContext_;
    id<JavaUtilList> *leafContexts_;
    IOSObjectArray *leafSlices_;
    id<JavaUtilConcurrentExecutorService> *executor_;
    id<OrgApacheLuceneSearchQueryCache> *queryCache_;
    id<OrgApacheLuceneSearchQueryCachingPolicy> *queryCachingPolicy_;
    OrgApacheLuceneSearchSimilaritiesSimilarity *similarity_;
}




-(id)initWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexIndexReader:(id)arg0 withJavaUtilConcurrentExecutorService:(id)arg1 ;
-(id)initWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 withJavaUtilConcurrentExecutorService:(id)arg1 ;
-(id)initWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 ;
-(void)setQueryCacheWithOrgApacheLuceneSearchQueryCache:(id)arg0 ;
-(void)setQueryCachingPolicyWithOrgApacheLuceneSearchQueryCachingPolicy:(id)arg0 ;
-(id)slicesWithJavaUtilList:(id)arg0 ;
-(id)getIndexReader;
-(id)docWithInt:(int)arg0 ;
-(void)docWithInt:(int)arg0 withOrgApacheLuceneIndexStoredFieldVisitor:(id)arg1 ;
-(id)docWithInt:(int)arg0 withJavaUtilSet:(id)arg1 ;
-(void)setSimilarityWithOrgApacheLuceneSearchSimilaritiesSimilarity:(id)arg0 ;
-(id)getSimilarityWithBoolean:(BOOL)arg0 ;
-(id)wrapFilterWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 ;
-(int)countWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withInt:(int)arg2 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withOrgApacheLuceneSearchFilter:(id)arg2 withInt:(int)arg3 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withInt:(int)arg1 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 withInt:(int)arg2 ;
-(void)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 withOrgApacheLuceneSearchCollector:(id)arg2 ;
-(void)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchCollector:(id)arg1 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSort:(id)arg3 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSort:(id)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchSort:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withOrgApacheLuceneSearchFilter:(id)arg2 withInt:(int)arg3 withOrgApacheLuceneSearchSort:(id)arg4 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchSort:(id)arg2 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSort:(id)arg3 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withOrgApacheLuceneSearchFilter:(id)arg2 withInt:(int)arg3 withOrgApacheLuceneSearchSort:(id)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6 ;
-(id)searchAfterWithOrgApacheLuceneSearchScoreDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSort:(id)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 ;
-(id)searchAfterWithOrgApacheLuceneSearchFieldDoc:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSort:(id)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 ;
-(id)searchWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchCollectorManager:(id)arg1 ;
-(void)searchWithJavaUtilList:(id)arg0 withOrgApacheLuceneSearchWeight:(id)arg1 withOrgApacheLuceneSearchCollector:(id)arg2 ;
-(id)rewriteWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(id)explainWithOrgApacheLuceneSearchQuery:(id)arg0 withInt:(int)arg1 ;
-(id)explainWithOrgApacheLuceneSearchWeight:(id)arg0 withInt:(int)arg1 ;
-(id)createNormalizedWeightWithOrgApacheLuceneSearchQuery:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)createWeightWithOrgApacheLuceneSearchQuery:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)getTopReaderContext;
-(id)description;
-(id)termStatisticsWithOrgApacheLuceneIndexTerm:(id)arg0 withOrgApacheLuceneIndexTermContext:(id)arg1 ;
-(id)collectionStatisticsWithNSString:(id)arg0 ;
-(void)dealloc;
+(id)getDefaultSimilarity;
+(id)getDefaultQueryCache;
+(void)setDefaultQueryCacheWithOrgApacheLuceneSearchQueryCache:(id)arg0 ;
+(id)getDefaultQueryCachingPolicy;
+(void)setDefaultQueryCachingPolicyWithOrgApacheLuceneSearchQueryCachingPolicy:(id)arg0 ;
+(void)initialize;


@end


#endif