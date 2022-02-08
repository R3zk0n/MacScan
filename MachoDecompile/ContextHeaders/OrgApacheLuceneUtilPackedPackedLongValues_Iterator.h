// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_ITERATOR_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_ITERATOR_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilPackedPackedLongValues.h"

@interface OrgApacheLuceneUtilPackedPackedLongValues_Iterator : NSObject {
    IOSLongArray *currentValues_;
    int vOff_;
    int pOff_;
    int currentCount_;
    OrgApacheLuceneUtilPackedPackedLongValues *this$0_;
}




-(id)initWithOrgApacheLuceneUtilPackedPackedLongValues:(id)arg0 ;
-(void)fillBlock;
-(BOOL)hasNext;
-(NSInteger)next;
-(void)dealloc;


@end


#endif