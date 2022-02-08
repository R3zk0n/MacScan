// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILARRAYINTROSORTER_H
#define ORGAPACHELUCENEUTILARRAYINTROSORTER_H



#import "OrgApacheLuceneUtilIntroSorter.h"
#import "IOSObjectArray.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilArrayIntroSorter : OrgApacheLuceneUtilIntroSorter {
    IOSObjectArray *arr_;
    id<JavaUtilComparator> *comparator_;
    id *pivot_;
}




-(id)initWithNSObjectArray:(id)arg0 withJavaUtilComparator:(id)arg1 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setPivotWithInt:(int)arg0 ;
-(int)comparePivotWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif