// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENENSDATADIRECTORY_NSDATAINDEXINPUTOLD_H
#define COMAPPLEPROACTIVELUCENENSDATADIRECTORY_NSDATAINDEXINPUTOLD_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "ComAppleProactiveLuceneNSDataDirectory.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"

@interface ComAppleProactiveLuceneNSDataDirectory_NSDataIndexInputOld : OrgApacheLuceneStoreIndexInput <OrgApacheLuceneStoreRandomAccessInput>

 {
    ComAppleProactiveLuceneNSDataDirectory *this$0_;
    NSString *name_;
    NSInteger length_;
    int sliceOffset_;
    int pos_;
    id *nsData_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithComAppleProactiveLuceneNSDataDirectory:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithComAppleProactiveLuceneNSDataDirectory:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 withLong:(NSInteger)arg3 withLong:(NSInteger)arg4 ;
-(void)close;
-(NSInteger)getFilePointer;
-(void)seekWithLong:(NSInteger)arg0 ;
-(NSInteger)length;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(char)readByte;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(short)readShort;
-(int)readInt;
-(NSInteger)readLong;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(char)readByteWithLong:(NSInteger)arg0 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;
-(int)readVInt;
-(NSInteger)readVLong;
-(NSInteger)readVLongWithBoolean:(BOOL)arg0 ;
-(NSInteger)readZLong;
-(void)dealloc;


@end


#endif