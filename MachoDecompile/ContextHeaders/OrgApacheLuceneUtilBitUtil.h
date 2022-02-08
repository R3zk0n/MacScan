// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITUTIL_H
#define ORGAPACHELUCENEUTILBITUTIL_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilBitUtil : NSObject



-(id)init;
+(int)bitCountWithByte:(char)arg0 ;
+(int)bitListWithByte:(char)arg0 ;
+(NSInteger)pop_arrayWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(NSInteger)pop_intersectWithLongArray:(id)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(NSInteger)pop_unionWithLongArray:(id)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(NSInteger)pop_andnotWithLongArray:(id)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(NSInteger)pop_xorWithLongArray:(id)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)nextHighestPowerOfTwoWithInt:(int)arg0 ;
+(NSInteger)nextHighestPowerOfTwoWithLong:(NSInteger)arg0 ;
+(NSInteger)interleaveWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(NSInteger)deinterleaveWithLong:(NSInteger)arg0 ;
+(NSInteger)flipFlopWithLong:(NSInteger)arg0 ;
+(int)zigZagEncodeWithInt:(int)arg0 ;
+(NSInteger)zigZagEncodeWithLong:(NSInteger)arg0 ;
+(int)zigZagDecodeWithInt:(int)arg0 ;
+(NSInteger)zigZagDecodeWithLong:(NSInteger)arg0 ;
+(void)initialize;


@end


#endif