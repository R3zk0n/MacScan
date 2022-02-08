// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILARRAYTIMSORTER_H
#define ORGAPACHELUCENEUTILARRAYTIMSORTER_H



#import "OrgApacheLuceneUtilTimSorter.h"
#import "IOSObjectArray.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilArrayTimSorter : OrgApacheLuceneUtilTimSorter {
    id<JavaUtilComparator> *comparator_;
    IOSObjectArray *arr_;
    IOSObjectArray *tmp_;
}




-(id)initWithNSObjectArray:(id)arg0 withJavaUtilComparator:(id)arg1 withInt:(int)arg2 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(void)saveWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)restoreWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareSavedWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif