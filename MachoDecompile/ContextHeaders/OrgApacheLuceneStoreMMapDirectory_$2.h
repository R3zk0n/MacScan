// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREMMAPDIRECTORY_$2_H
#define ORGAPACHELUCENESTOREMMAPDIRECTORY_$2_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner-Protocol.h"

@interface OrgApacheLuceneStoreMMapDirectory_$2 : NSObject <OrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)freeBufferWithOrgApacheLuceneStoreByteBufferIndexInput:(id)arg0 withJavaNioByteBuffer:(id)arg1 ;
-(id)init;


@end


#endif