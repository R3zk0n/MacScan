// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPAGEDGROWABLEWRITER_H
#define ORGAPACHELUCENEUTILPACKEDPAGEDGROWABLEWRITER_H



#import "OrgApacheLuceneUtilPackedAbstractPagedMutable.h"

@interface OrgApacheLuceneUtilPackedPagedGrowableWriter : OrgApacheLuceneUtilPackedAbstractPagedMutable {
    float acceptableOverheadRatio_;
}




-(id)initWithLong:(NSInteger)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
-(id)initWithLong:(NSInteger)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 withBoolean:(BOOL)arg4 ;
-(id)newMutableWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)newUnfilledCopyWithLong:(NSInteger)arg0 ;
-(NSInteger)baseRamBytesUsed;


@end


#endif