// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTESREFHASH_$1_H
#define ORGAPACHELUCENEUTILBYTESREFHASH_$1_H



#import "OrgApacheLuceneUtilIntroSorter.h"
#import "OrgApacheLuceneUtilBytesRefHash.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "IOSIntArray.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilBytesRefHash_$1 : OrgApacheLuceneUtilIntroSorter {
    OrgApacheLuceneUtilBytesRefHash *this$0_;
    OrgApacheLuceneUtilBytesRef *pivot_;
    OrgApacheLuceneUtilBytesRef *scratch1_;
    OrgApacheLuceneUtilBytesRef *scratch2_;
    IOSIntArray *val$compact_;
    id<JavaUtilComparator> *val$comp_;
}




-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setPivotWithInt:(int)arg0 ;
-(int)comparePivotWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneUtilBytesRefHash:(id)arg0 withIntArray:(id)arg1 withJavaUtilComparator:(id)arg2 ;
-(void)dealloc;


@end


#endif