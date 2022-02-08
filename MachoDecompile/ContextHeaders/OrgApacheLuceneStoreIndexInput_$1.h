// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREINDEXINPUT_$1_H
#define ORGAPACHELUCENESTOREINDEXINPUT_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"

@interface OrgApacheLuceneStoreIndexInput_$1 : NSObject <OrgApacheLuceneStoreRandomAccessInput>

 {
    OrgApacheLuceneStoreIndexInput *val$slice_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(char)readByteWithLong:(NSInteger)arg0 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;
-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(void)dealloc;


@end


#endif