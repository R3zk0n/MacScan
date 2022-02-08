// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTUTIL_TOPNSEARCHER_H
#define ORGAPACHELUCENEUTILFSTUTIL_TOPNSEARCHER_H


#import <Foundation/Foundation.h>

#import "JavaUtilTreeSet.h"
#import "OrgApacheLuceneUtilFstFST.h"
#import "OrgApacheLuceneUtilFstFST_BytesReader.h"
#import "OrgApacheLuceneUtilFstFST_Arc.h"
#import "JavaUtilComparator-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilFstUtil_TopNSearcher : NSObject {
    JavaUtilTreeSet *queue_;
    OrgApacheLuceneUtilFstFST *fst_;
    OrgApacheLuceneUtilFstFST_BytesReader *bytesReader_;
    int topN_;
    int maxQueueDepth_;
    OrgApacheLuceneUtilFstFST_Arc *scratchArc_;
    id<JavaUtilComparator> *comparator_;
    id<JavaUtilComparator> *pathComparator_;
}




-(id)initWithOrgApacheLuceneUtilFstFST:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilComparator:(id)arg3 ;
-(id)initWithOrgApacheLuceneUtilFstFST:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilComparator:(id)arg3 withJavaUtilComparator:(id)arg4 ;
-(void)addIfCompetitiveWithOrgApacheLuceneUtilFstUtil_FSTPath:(id)arg0 ;
-(void)addStartPathsWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withId:(id)arg1 withBoolean:(BOOL)arg2 withOrgApacheLuceneUtilIntsRefBuilder:(id)arg3 ;
-(void)addStartPathsWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withId:(id)arg1 withBoolean:(BOOL)arg2 withOrgApacheLuceneUtilIntsRefBuilder:(id)arg3 withFloat:(float)arg4 withJavaLangCharSequence:(id)arg5 ;
-(id)search;
-(BOOL)acceptResultWithOrgApacheLuceneUtilFstUtil_FSTPath:(id)arg0 ;
-(BOOL)acceptResultWithOrgApacheLuceneUtilIntsRef:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;


@end


#endif