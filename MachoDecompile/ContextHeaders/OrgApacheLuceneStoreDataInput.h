// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREDATAINPUT_H
#define ORGAPACHELUCENESTOREDATAINPUT_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneStoreDataInput : NSObject <NSCopying>

 {
    IOSByteArray *skipBuffer_;
}




-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(short)readShort;
-(int)readInt;
-(int)readVInt;
-(int)readZInt;
-(NSInteger)readLong;
-(NSInteger)readVLong;
-(NSInteger)readVLongWithBoolean:(BOOL)arg0 ;
-(NSInteger)readZLong;
-(id)readString;
-(id)clone;
-(id)readStringStringMap;
-(id)readMapOfStrings;
-(id)readStringSet;
-(id)readSetOfStrings;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif