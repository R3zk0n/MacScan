// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILCOLLECTIONUTIL_LISTINTROSORTER_H
#define ORGAPACHELUCENEUTILCOLLECTIONUTIL_LISTINTROSORTER_H



#import "OrgApacheLuceneUtilIntroSorter.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilCollectionUtil_ListIntroSorter : OrgApacheLuceneUtilIntroSorter {
    id *pivot_;
    id<JavaUtilList> *list_;
    id<JavaUtilComparator> *comp_;
}




-(id)initWithJavaUtilList:(id)arg0 withJavaUtilComparator:(id)arg1 ;
-(void)setPivotWithInt:(int)arg0 ;
-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)comparePivotWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif