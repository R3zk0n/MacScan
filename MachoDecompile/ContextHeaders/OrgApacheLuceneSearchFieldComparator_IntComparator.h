// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_INTCOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_INTCOMPARATOR_H

@class NumericComparator;


#import "IOSIntArray.h"

@interface OrgApacheLuceneSearchFieldComparator_IntComparator : NumericComparator {
    IOSIntArray *values_;
    int bottom_;
    int topValue_;
}




-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withJavaLangInteger:(id)arg2 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setBottomWithInt:(int)arg0 ;
-(void)setTopValueWithId:(id)arg0 ;
-(id)valueWithInt:(int)arg0 ;
-(int)compareTopWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif