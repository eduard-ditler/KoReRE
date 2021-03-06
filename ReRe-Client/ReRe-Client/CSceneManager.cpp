//
//  SceneManager.cpp
//  ReRe-Client
//
//  Created by Thomas Kipshagen on 23.04.13.
//  Copyright (c) 2013 Thomas Kipshagen. All rights reserved.
//

#include "CSceneManager.h"

CSceneManager::CSceneManager()
{
    ais_asScene = imp_asImporter.ReadFile("XXX", aiProcess_SortByPType);
    sn_p_rootSceneNode = new CSceneNode();
}

CSceneNode* CSceneManager::returnRootSceneNode()
{
    return sn_p_rootSceneNode;
}

CCamera* CSceneManager::createCameraNode()
{
    c_cameraNode = new CCamera();
    return c_cameraNode;
}

void CSceneManager::deleteCameraNode()
{
    delete c_cameraNode;
}

CCamera* CSceneManager::returnCameraNode()
{
    return c_cameraNode;
}

//
CLight* CSceneManager::createLightNode()
{
    v_lightNode.push_back(new CLight(new int()));
    return v_lightNode.back();
}

void CSceneManager::deleteLightNode(int i_lightNodeID)
{
    v_lightNode.erase(v_lightNode.begin()+i_lightNodeID);
}

CLight* CSceneManager::returnLightNode(int i_lightNodeID)
{
    return v_lightNode.at(i_lightNodeID);
}

int CSceneManager::returnLightNodeSize()
{
    return (int)v_lightNode.size();
}

vector<CLight*>* CSceneManager::returnLightVector()
{
    return &v_lightNode;
}

