// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTNODEHASH_H
#define ORGAPACHELUCENEUTILFSTNODEHASH_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedPagedGrowableWriter.h"
#import "OrgApacheLuceneUtilFstFST.h"
#import "OrgApacheLuceneUtilFstFST_Arc.h"
#import "OrgApacheLuceneUtilFstFST_BytesReader.h"

@interface OrgApacheLuceneUtilFstNodeHash : NSObject {
    OrgApacheLuceneUtilPackedPagedGrowableWriter *table_;
    NSInteger count_;
    NSInteger mask_;
    OrgApacheLuceneUtilFstFST *fst_;
    OrgApacheLuceneUtilFstFST_Arc *scratchArc_;
    OrgApacheLuceneUtilFstFST_BytesReader *in_;
}




-(id)initWithOrgApacheLuceneUtilFstFST:(id)arg0 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg1 ;
-(BOOL)nodesEqualWithOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)hash__WithOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg0 ;
-(NSInteger)hash__WithLong:(NSInteger)arg0 ;
-(NSInteger)addWithOrgApacheLuceneUtilFstBuilder:(id)arg0 withOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg1 ;
-(void)addNewWithLong:(NSInteger)arg0 ;
-(void)rehash;
-(void)dealloc;


@end


#endif