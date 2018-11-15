package com.cmsoft.konan.service.impl;

import java.util.List;

import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.cmsoft.konan.dao.ServerInfoDAO;
import com.cmsoft.konan.service.ServerInfoService;
import com.cmsoft.konan.vo.CommonSearchVO;
import com.cmsoft.konan.vo.ServerInfoVO;

@Service
public class ServerInfoServiceImpl implements ServerInfoService {
	@Autowired private ServerInfoDAO serverInfoDAO;
	
	@Override
	public List<ServerInfoVO> selectServerInfoList(CommonSearchVO vo) {
		return serverInfoDAO.selectServerInfoList(vo);
	}
	
	@Override
	public ServerInfoVO selectServerInfo(ServerInfoVO vo){
		return serverInfoDAO.selectServerInfo(vo);
	}	
	
	@Override
	public ServerInfoVO updateServerUnActive(HttpServletRequest request, ServerInfoVO vo){
		return serverInfoDAO.updateServerUnActive(vo);
	}
	
	@Override
	public ServerInfoVO updateServerActive(HttpServletRequest request, ServerInfoVO vo){
		return serverInfoDAO.updateServerActive(vo);
	}
	
	@Override
	public ServerInfoVO updateServerProxy(HttpServletRequest request, ServerInfoVO vo){
		return serverInfoDAO.updateServerProxy(vo);
	}	
}
