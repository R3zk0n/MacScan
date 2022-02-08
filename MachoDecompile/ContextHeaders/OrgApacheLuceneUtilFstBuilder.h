// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBUILDER_H
#define ORGAPACHELUCENEUTILFSTBUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstFST.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilFstBytesStore.h"
#import "OrgApacheLuceneUtilFstNodeHash.h"
#import "OrgApacheLuceneUtilIntsRefBuilder.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneUtilFstBuilder : NSObject {
    OrgApacheLuceneUtilFstFST *fst_;
    NSInteger lastFrozenNode_;
    IOSIntArray *reusedBytesPerArc_;
    NSInteger arcCount_;
    NSInteger nodeCount_;
    BOOL allowArrayArcs_;
    OrgApacheLuceneUtilFstBytesStore *bytes_;
    OrgApacheLuceneUtilFstNodeHash *dedupHash_;
    id *NO_OUTPUT_;
    int minSuffixCount1_;
    int minSuffixCount2_;
    BOOL doShareNonSingletonNodes_;
    int shareMaxTailLength_;
    OrgApacheLuceneUtilIntsRefBuilder *lastInput_;
    BOOL doPackFST_;
    float acceptableOverheadRatio_;
    IOSObjectArray *frontier_;
}




-(id)initWithOrgApacheLuceneUtilFstFST_INPUT_TYPEEnum:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 ;
-(id)initWithOrgApacheLuceneUtilFstFST_INPUT_TYPEEnum:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withInt:(int)arg5 withOrgApacheLuceneUtilFstOutputs:(id)arg6 withBoolean:(BOOL)arg7 withFloat:(float)arg8 withBoolean:(BOOL)arg9 withInt:(int)arg10 ;
-(NSInteger)getTermCount;
-(NSInteger)getNodeCount;
-(NSInteger)getArcCount;
-(NSInteger)getMappedStateCount;
-(id)compileNodeWithOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg0 withInt:(int)arg1 ;
-(void)freezeTailWithInt:(int)arg0 ;
-(void)addWithOrgApacheLuceneUtilIntsRef:(id)arg0 withId:(id)arg1 ;
-(BOOL)validOutputWithId:(id)arg0 ;
-(id)finish;
-(void)compileAllTargetsWithOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)fstRamBytesUsed;
-(void)dealloc;


@end


#endif