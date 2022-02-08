// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDMONOTONICLONGVALUES_H
#define ORGAPACHELUCENEUTILPACKEDMONOTONICLONGVALUES_H



#import "OrgApacheLuceneUtilPackedDeltaPackedLongValues.h"
#import "IOSFloatArray.h"

@interface OrgApacheLuceneUtilPackedMonotonicLongValues : OrgApacheLuceneUtilPackedDeltaPackedLongValues {
    IOSFloatArray *averages_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_ReaderArray:(id)arg2 withLongArray:(id)arg3 withFloatArray:(id)arg4 withLong:(NSInteger)arg5 withLong:(NSInteger)arg6 ;
-(NSInteger)getWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)decodeBlockWithInt:(int)arg0 withLongArray:(id)arg1 ;
-(void)dealloc;
+(void)initialize;


@end


#endif