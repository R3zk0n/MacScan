// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREDATAOUTPUT_H
#define ORGAPACHELUCENESTOREDATAOUTPUT_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"

@interface OrgApacheLuceneStoreDataOutput : NSObject {
    IOSByteArray *copyBuffer_;
}




-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(void)writeIntWithInt:(int)arg0 ;
-(void)writeShortWithShort:(short)arg0 ;
-(void)writeVIntWithInt:(int)arg0 ;
-(void)writeZIntWithInt:(int)arg0 ;
-(void)writeLongWithLong:(NSInteger)arg0 ;
-(void)writeVLongWithLong:(NSInteger)arg0 ;
-(void)writeSignedVLongWithLong:(NSInteger)arg0 ;
-(void)writeZLongWithLong:(NSInteger)arg0 ;
-(void)writeStringWithNSString:(id)arg0 ;
-(void)copyBytesWithOrgApacheLuceneStoreDataInput:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)writeStringStringMapWithJavaUtilMap:(id)arg0 ;
-(void)writeMapOfStringsWithJavaUtilMap:(id)arg0 ;
-(void)writeStringSetWithJavaUtilSet:(id)arg0 ;
-(void)writeSetOfStringsWithJavaUtilSet:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif