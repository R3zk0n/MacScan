// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILTIMSORTER_H
#define ORGAPACHELUCENEUTILTIMSORTER_H



#import "OrgApacheLuceneUtilSorter.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilTimSorter : OrgApacheLuceneUtilSorter {
    int maxTempSlots_;
    int minRun_;
    int to_;
    int stackSize_;
    IOSIntArray *runEnds_;
}




-(id)initWithInt:(int)arg0 ;
-(int)runLenWithInt:(int)arg0 ;
-(int)runBaseWithInt:(int)arg0 ;
-(int)runEndWithInt:(int)arg0 ;
-(void)setRunEndWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)pushRunLenWithInt:(int)arg0 ;
-(int)nextRun;
-(void)ensureInvariants;
-(void)exhaustStack;
-(void)resetWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)mergeAtWithInt:(int)arg0 ;
-(void)mergeWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)sortWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)doRotateWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)mergeLoWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)mergeHiWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)lowerSavedWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)upperSavedWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)lowerSaved3WithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)upperSaved3WithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(int)minRunWithInt:(int)arg0 ;


@end


#endif