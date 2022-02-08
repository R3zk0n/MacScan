// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CTKASSETS_H
#define CTKASSETS_H

@class _PASNotificationToken;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>
#import <ProactiveSupport/_PASAsset2.h>

#import "CTKAssetsProtocol-Protocol.h"

@interface CTKAssets : NSObject <CTKAssetsProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    _PASAsset2 *_commonAsset;
    _PASAsset2 *_indexAsset;
    _opaque_pthread_mutex_t _indexAssetLock;
    NSString *_indexId;
    _PASNotificationToken *indexNotificationToken;
    id *_indexChangeHandler;
}




-(id)init;
-(void)dealloc;
-(id)common;
-(id)index;
-(void)registerIndexChangeHandler:(id)arg0 ;
-(id)expectedIndexAssetLanguageCodes;
-(id)_getPlistWithAsset:(id)arg0 resourceName:(id)arg1 ;
-(id)_getPlistFromPath:(id)arg0 ;
-(void)_loadCommonAsset;
-(void)_reloadPlists;
-(void)_invokeIndexChangeHandler;
-(id)_loadIndexAsset:(id)arg0 isFallback:(char)arg1 ;
+(void)initialize;


@end


#endif