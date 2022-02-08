// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENENSDATADIRECTORY_NSDATAINDEXINPUT_H
#define COMAPPLEPROACTIVELUCENENSDATADIRECTORY_NSDATAINDEXINPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "ComAppleProactiveLuceneNSDataDirectory.h"

@interface ComAppleProactiveLuceneNSDataDirectory_NSDataIndexInput : OrgApacheLuceneStoreIndexInput {
    ComAppleProactiveLuceneNSDataDirectory *this$0_;
    NSString *name_;
    NSInteger length_;
    id *nsData_;
    NSInteger pos_;
}




-(id)initWithComAppleProactiveLuceneNSDataDirectory:(id)arg0 withNSString:(id)arg1 ;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)close;
-(NSInteger)length;
-(NSInteger)getFilePointer;
-(void)seekWithLong:(NSInteger)arg0 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif