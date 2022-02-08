// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGLUKHNOSPORTMOBILEFILEDIRECTORYSTREAM_SIMPLEDIRECTORYSTREAM_H
#define ORGLUKHNOSPORTMOBILEFILEDIRECTORYSTREAM_SIMPLEDIRECTORYSTREAM_H


#import <Foundation/Foundation.h>

#import "OrgLukhnosPortmobileFileDirectoryStream-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgLukhnosPortmobileFileDirectoryStream_SimpleDirectoryStream : NSObject <OrgLukhnosPortmobileFileDirectoryStream>

 {
    id<JavaUtilList> *paths_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilList:(id)arg0 ;
-(id)iterator;
-(void)close;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif