// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPDOCSCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPDOCSCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "OrgApacheLuceneSearchCollector-Protocol.h"

@interface OrgApacheLuceneSearchTopDocsCollector : NSObject <OrgApacheLuceneSearchCollector>

 {
    OrgApacheLuceneUtilPriorityQueue *pq_;
    int totalHits_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneUtilPriorityQueue:(id)arg0 ;
-(void)populateResultsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(id)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(int)getTotalHits;
-(int)topDocsSize;
-(id)topDocs;
-(id)topDocsWithInt:(int)arg0 ;
-(id)topDocsWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)dealloc;
+(void)initialize;


@end


#endif