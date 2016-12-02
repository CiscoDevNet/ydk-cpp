
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_wanphy_ui_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wanphy_ui_oper {

Wanphy::Controllers::Controller::Info::Info()
    :
    	admin_mode{YType::enumeration, "admin-mode"},
	 line_ais{YType::uint32, "line-ais"},
	 line_bip{YType::uint64, "line-bip"},
	 line_febe{YType::uint64, "line-febe"},
	 line_rdi{YType::uint32, "line-rdi"},
	 operational_mode{YType::enumeration, "operational-mode"},
	 path_ais{YType::uint32, "path-ais"},
	 path_bip{YType::uint64, "path-bip"},
	 path_febe{YType::uint64, "path-febe"},
	 path_lop{YType::uint32, "path-lop"},
	 path_newptr{YType::uint32, "path-newptr"},
	 path_nse{YType::uint32, "path-nse"},
	 path_pse{YType::uint32, "path-pse"},
	 path_rdi{YType::uint32, "path-rdi"},
	 port_state{YType::uint32, "port-state"},
	 register_j1_rx0{YType::uint32, "register-j1-rx0"},
	 register_j1_rx1{YType::uint32, "register-j1-rx1"},
	 register_j1_rx2{YType::uint32, "register-j1-rx2"},
	 register_j1_rx3{YType::uint32, "register-j1-rx3"},
	 register_j1_rx4{YType::uint32, "register-j1-rx4"},
	 register_j1_rx5{YType::uint32, "register-j1-rx5"},
	 register_j1_rx6{YType::uint32, "register-j1-rx6"},
	 register_j1_rx7{YType::uint32, "register-j1-rx7"},
	 register_l_bip{YType::uint32, "register-l-bip"},
	 register_l_fe_bip{YType::uint32, "register-l-fe-bip"},
	 register_p_bec{YType::uint32, "register-p-bec"},
	 register_p_febe{YType::uint32, "register-p-febe"},
	 register_s_bip{YType::uint32, "register-s-bip"},
	 remote_ip{YType::str, "remote-ip"},
	 sd_ber_report{YType::enumeration, "sd-ber-report"},
	 sd_ber_threshold{YType::uint32, "sd-ber-threshold"},
	 section_bip{YType::uint64, "section-bip"},
	 section_lof{YType::uint32, "section-lof"},
	 section_los{YType::uint32, "section-los"},
	 sf_ber_report{YType::enumeration, "sf-ber-report"},
	 sf_ber_threshold{YType::uint32, "sf-ber-threshold"},
	 wanphy_poll_timer{YType::uint32, "wanphy-poll-timer"},
	 wis_alarms_feaisp{YType::uint32, "wis-alarms-feaisp"},
	 wis_alarms_felcdp{YType::uint32, "wis-alarms-felcdp"},
	 wis_alarms_lfebip{YType::uint64, "wis-alarms-lfebip"},
	 wis_alarms_pbec{YType::uint64, "wis-alarms-pbec"},
	 wis_alarms_plcd{YType::uint32, "wis-alarms-plcd"},
	 wis_alarms_plmp{YType::uint32, "wis-alarms-plmp"},
	 wis_alarms_ser{YType::uint32, "wis-alarms-ser"},
	 wis_alarms_wlos{YType::uint32, "wis-alarms-wlos"}
{
    yang_name = "info"; yang_parent_name = "controller";
}

Wanphy::Controllers::Controller::Info::~Info()
{
}

bool Wanphy::Controllers::Controller::Info::has_data() const
{
    return admin_mode.is_set
	|| line_ais.is_set
	|| line_bip.is_set
	|| line_febe.is_set
	|| line_rdi.is_set
	|| operational_mode.is_set
	|| path_ais.is_set
	|| path_bip.is_set
	|| path_febe.is_set
	|| path_lop.is_set
	|| path_newptr.is_set
	|| path_nse.is_set
	|| path_pse.is_set
	|| path_rdi.is_set
	|| port_state.is_set
	|| register_j1_rx0.is_set
	|| register_j1_rx1.is_set
	|| register_j1_rx2.is_set
	|| register_j1_rx3.is_set
	|| register_j1_rx4.is_set
	|| register_j1_rx5.is_set
	|| register_j1_rx6.is_set
	|| register_j1_rx7.is_set
	|| register_l_bip.is_set
	|| register_l_fe_bip.is_set
	|| register_p_bec.is_set
	|| register_p_febe.is_set
	|| register_s_bip.is_set
	|| remote_ip.is_set
	|| sd_ber_report.is_set
	|| sd_ber_threshold.is_set
	|| section_bip.is_set
	|| section_lof.is_set
	|| section_los.is_set
	|| sf_ber_report.is_set
	|| sf_ber_threshold.is_set
	|| wanphy_poll_timer.is_set
	|| wis_alarms_feaisp.is_set
	|| wis_alarms_felcdp.is_set
	|| wis_alarms_lfebip.is_set
	|| wis_alarms_pbec.is_set
	|| wis_alarms_plcd.is_set
	|| wis_alarms_plmp.is_set
	|| wis_alarms_ser.is_set
	|| wis_alarms_wlos.is_set;
}

bool Wanphy::Controllers::Controller::Info::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_mode.operation)
	|| is_set(line_ais.operation)
	|| is_set(line_bip.operation)
	|| is_set(line_febe.operation)
	|| is_set(line_rdi.operation)
	|| is_set(operational_mode.operation)
	|| is_set(path_ais.operation)
	|| is_set(path_bip.operation)
	|| is_set(path_febe.operation)
	|| is_set(path_lop.operation)
	|| is_set(path_newptr.operation)
	|| is_set(path_nse.operation)
	|| is_set(path_pse.operation)
	|| is_set(path_rdi.operation)
	|| is_set(port_state.operation)
	|| is_set(register_j1_rx0.operation)
	|| is_set(register_j1_rx1.operation)
	|| is_set(register_j1_rx2.operation)
	|| is_set(register_j1_rx3.operation)
	|| is_set(register_j1_rx4.operation)
	|| is_set(register_j1_rx5.operation)
	|| is_set(register_j1_rx6.operation)
	|| is_set(register_j1_rx7.operation)
	|| is_set(register_l_bip.operation)
	|| is_set(register_l_fe_bip.operation)
	|| is_set(register_p_bec.operation)
	|| is_set(register_p_febe.operation)
	|| is_set(register_s_bip.operation)
	|| is_set(remote_ip.operation)
	|| is_set(sd_ber_report.operation)
	|| is_set(sd_ber_threshold.operation)
	|| is_set(section_bip.operation)
	|| is_set(section_lof.operation)
	|| is_set(section_los.operation)
	|| is_set(sf_ber_report.operation)
	|| is_set(sf_ber_threshold.operation)
	|| is_set(wanphy_poll_timer.operation)
	|| is_set(wis_alarms_feaisp.operation)
	|| is_set(wis_alarms_felcdp.operation)
	|| is_set(wis_alarms_lfebip.operation)
	|| is_set(wis_alarms_pbec.operation)
	|| is_set(wis_alarms_plcd.operation)
	|| is_set(wis_alarms_plmp.operation)
	|| is_set(wis_alarms_ser.operation)
	|| is_set(wis_alarms_wlos.operation);
}

std::string Wanphy::Controllers::Controller::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

EntityPath Wanphy::Controllers::Controller::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_mode.is_set || is_set(admin_mode.operation)) leaf_name_data.push_back(admin_mode.get_name_leafdata());
    if (line_ais.is_set || is_set(line_ais.operation)) leaf_name_data.push_back(line_ais.get_name_leafdata());
    if (line_bip.is_set || is_set(line_bip.operation)) leaf_name_data.push_back(line_bip.get_name_leafdata());
    if (line_febe.is_set || is_set(line_febe.operation)) leaf_name_data.push_back(line_febe.get_name_leafdata());
    if (line_rdi.is_set || is_set(line_rdi.operation)) leaf_name_data.push_back(line_rdi.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.operation)) leaf_name_data.push_back(operational_mode.get_name_leafdata());
    if (path_ais.is_set || is_set(path_ais.operation)) leaf_name_data.push_back(path_ais.get_name_leafdata());
    if (path_bip.is_set || is_set(path_bip.operation)) leaf_name_data.push_back(path_bip.get_name_leafdata());
    if (path_febe.is_set || is_set(path_febe.operation)) leaf_name_data.push_back(path_febe.get_name_leafdata());
    if (path_lop.is_set || is_set(path_lop.operation)) leaf_name_data.push_back(path_lop.get_name_leafdata());
    if (path_newptr.is_set || is_set(path_newptr.operation)) leaf_name_data.push_back(path_newptr.get_name_leafdata());
    if (path_nse.is_set || is_set(path_nse.operation)) leaf_name_data.push_back(path_nse.get_name_leafdata());
    if (path_pse.is_set || is_set(path_pse.operation)) leaf_name_data.push_back(path_pse.get_name_leafdata());
    if (path_rdi.is_set || is_set(path_rdi.operation)) leaf_name_data.push_back(path_rdi.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.operation)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (register_j1_rx0.is_set || is_set(register_j1_rx0.operation)) leaf_name_data.push_back(register_j1_rx0.get_name_leafdata());
    if (register_j1_rx1.is_set || is_set(register_j1_rx1.operation)) leaf_name_data.push_back(register_j1_rx1.get_name_leafdata());
    if (register_j1_rx2.is_set || is_set(register_j1_rx2.operation)) leaf_name_data.push_back(register_j1_rx2.get_name_leafdata());
    if (register_j1_rx3.is_set || is_set(register_j1_rx3.operation)) leaf_name_data.push_back(register_j1_rx3.get_name_leafdata());
    if (register_j1_rx4.is_set || is_set(register_j1_rx4.operation)) leaf_name_data.push_back(register_j1_rx4.get_name_leafdata());
    if (register_j1_rx5.is_set || is_set(register_j1_rx5.operation)) leaf_name_data.push_back(register_j1_rx5.get_name_leafdata());
    if (register_j1_rx6.is_set || is_set(register_j1_rx6.operation)) leaf_name_data.push_back(register_j1_rx6.get_name_leafdata());
    if (register_j1_rx7.is_set || is_set(register_j1_rx7.operation)) leaf_name_data.push_back(register_j1_rx7.get_name_leafdata());
    if (register_l_bip.is_set || is_set(register_l_bip.operation)) leaf_name_data.push_back(register_l_bip.get_name_leafdata());
    if (register_l_fe_bip.is_set || is_set(register_l_fe_bip.operation)) leaf_name_data.push_back(register_l_fe_bip.get_name_leafdata());
    if (register_p_bec.is_set || is_set(register_p_bec.operation)) leaf_name_data.push_back(register_p_bec.get_name_leafdata());
    if (register_p_febe.is_set || is_set(register_p_febe.operation)) leaf_name_data.push_back(register_p_febe.get_name_leafdata());
    if (register_s_bip.is_set || is_set(register_s_bip.operation)) leaf_name_data.push_back(register_s_bip.get_name_leafdata());
    if (remote_ip.is_set || is_set(remote_ip.operation)) leaf_name_data.push_back(remote_ip.get_name_leafdata());
    if (sd_ber_report.is_set || is_set(sd_ber_report.operation)) leaf_name_data.push_back(sd_ber_report.get_name_leafdata());
    if (sd_ber_threshold.is_set || is_set(sd_ber_threshold.operation)) leaf_name_data.push_back(sd_ber_threshold.get_name_leafdata());
    if (section_bip.is_set || is_set(section_bip.operation)) leaf_name_data.push_back(section_bip.get_name_leafdata());
    if (section_lof.is_set || is_set(section_lof.operation)) leaf_name_data.push_back(section_lof.get_name_leafdata());
    if (section_los.is_set || is_set(section_los.operation)) leaf_name_data.push_back(section_los.get_name_leafdata());
    if (sf_ber_report.is_set || is_set(sf_ber_report.operation)) leaf_name_data.push_back(sf_ber_report.get_name_leafdata());
    if (sf_ber_threshold.is_set || is_set(sf_ber_threshold.operation)) leaf_name_data.push_back(sf_ber_threshold.get_name_leafdata());
    if (wanphy_poll_timer.is_set || is_set(wanphy_poll_timer.operation)) leaf_name_data.push_back(wanphy_poll_timer.get_name_leafdata());
    if (wis_alarms_feaisp.is_set || is_set(wis_alarms_feaisp.operation)) leaf_name_data.push_back(wis_alarms_feaisp.get_name_leafdata());
    if (wis_alarms_felcdp.is_set || is_set(wis_alarms_felcdp.operation)) leaf_name_data.push_back(wis_alarms_felcdp.get_name_leafdata());
    if (wis_alarms_lfebip.is_set || is_set(wis_alarms_lfebip.operation)) leaf_name_data.push_back(wis_alarms_lfebip.get_name_leafdata());
    if (wis_alarms_pbec.is_set || is_set(wis_alarms_pbec.operation)) leaf_name_data.push_back(wis_alarms_pbec.get_name_leafdata());
    if (wis_alarms_plcd.is_set || is_set(wis_alarms_plcd.operation)) leaf_name_data.push_back(wis_alarms_plcd.get_name_leafdata());
    if (wis_alarms_plmp.is_set || is_set(wis_alarms_plmp.operation)) leaf_name_data.push_back(wis_alarms_plmp.get_name_leafdata());
    if (wis_alarms_ser.is_set || is_set(wis_alarms_ser.operation)) leaf_name_data.push_back(wis_alarms_ser.get_name_leafdata());
    if (wis_alarms_wlos.is_set || is_set(wis_alarms_wlos.operation)) leaf_name_data.push_back(wis_alarms_wlos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Wanphy::Controllers::Controller::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Wanphy::Controllers::Controller::Info::get_children()
{
    return children;
}

void Wanphy::Controllers::Controller::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-mode")
    {
        admin_mode = value;
    }
    if(value_path == "line-ais")
    {
        line_ais = value;
    }
    if(value_path == "line-bip")
    {
        line_bip = value;
    }
    if(value_path == "line-febe")
    {
        line_febe = value;
    }
    if(value_path == "line-rdi")
    {
        line_rdi = value;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
    }
    if(value_path == "path-ais")
    {
        path_ais = value;
    }
    if(value_path == "path-bip")
    {
        path_bip = value;
    }
    if(value_path == "path-febe")
    {
        path_febe = value;
    }
    if(value_path == "path-lop")
    {
        path_lop = value;
    }
    if(value_path == "path-newptr")
    {
        path_newptr = value;
    }
    if(value_path == "path-nse")
    {
        path_nse = value;
    }
    if(value_path == "path-pse")
    {
        path_pse = value;
    }
    if(value_path == "path-rdi")
    {
        path_rdi = value;
    }
    if(value_path == "port-state")
    {
        port_state = value;
    }
    if(value_path == "register-j1-rx0")
    {
        register_j1_rx0 = value;
    }
    if(value_path == "register-j1-rx1")
    {
        register_j1_rx1 = value;
    }
    if(value_path == "register-j1-rx2")
    {
        register_j1_rx2 = value;
    }
    if(value_path == "register-j1-rx3")
    {
        register_j1_rx3 = value;
    }
    if(value_path == "register-j1-rx4")
    {
        register_j1_rx4 = value;
    }
    if(value_path == "register-j1-rx5")
    {
        register_j1_rx5 = value;
    }
    if(value_path == "register-j1-rx6")
    {
        register_j1_rx6 = value;
    }
    if(value_path == "register-j1-rx7")
    {
        register_j1_rx7 = value;
    }
    if(value_path == "register-l-bip")
    {
        register_l_bip = value;
    }
    if(value_path == "register-l-fe-bip")
    {
        register_l_fe_bip = value;
    }
    if(value_path == "register-p-bec")
    {
        register_p_bec = value;
    }
    if(value_path == "register-p-febe")
    {
        register_p_febe = value;
    }
    if(value_path == "register-s-bip")
    {
        register_s_bip = value;
    }
    if(value_path == "remote-ip")
    {
        remote_ip = value;
    }
    if(value_path == "sd-ber-report")
    {
        sd_ber_report = value;
    }
    if(value_path == "sd-ber-threshold")
    {
        sd_ber_threshold = value;
    }
    if(value_path == "section-bip")
    {
        section_bip = value;
    }
    if(value_path == "section-lof")
    {
        section_lof = value;
    }
    if(value_path == "section-los")
    {
        section_los = value;
    }
    if(value_path == "sf-ber-report")
    {
        sf_ber_report = value;
    }
    if(value_path == "sf-ber-threshold")
    {
        sf_ber_threshold = value;
    }
    if(value_path == "wanphy-poll-timer")
    {
        wanphy_poll_timer = value;
    }
    if(value_path == "wis-alarms-feaisp")
    {
        wis_alarms_feaisp = value;
    }
    if(value_path == "wis-alarms-felcdp")
    {
        wis_alarms_felcdp = value;
    }
    if(value_path == "wis-alarms-lfebip")
    {
        wis_alarms_lfebip = value;
    }
    if(value_path == "wis-alarms-pbec")
    {
        wis_alarms_pbec = value;
    }
    if(value_path == "wis-alarms-plcd")
    {
        wis_alarms_plcd = value;
    }
    if(value_path == "wis-alarms-plmp")
    {
        wis_alarms_plmp = value;
    }
    if(value_path == "wis-alarms-ser")
    {
        wis_alarms_ser = value;
    }
    if(value_path == "wis-alarms-wlos")
    {
        wis_alarms_wlos = value;
    }
}

Wanphy::Controllers::Controller::Controller()
    :
    	controller_name{YType::str, "controller-name"}
    	,
    info(std::make_unique<Wanphy::Controllers::Controller::Info>())
{
    info->parent = this;
    children["info"] = info.get();

    yang_name = "controller"; yang_parent_name = "controllers";
}

Wanphy::Controllers::Controller::~Controller()
{
}

bool Wanphy::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| (info !=  nullptr && info->has_data());
}

bool Wanphy::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| (info !=  nullptr && is_set(info->operation));
}

std::string Wanphy::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Wanphy::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy/controllers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Wanphy::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "info")
    {
        if(info != nullptr)
        {
            children["info"] = info.get();
        }
        else
        {
            info = std::make_unique<Wanphy::Controllers::Controller::Info>();
            info->parent = this;
            children["info"] = info.get();
        }
        return children.at("info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Wanphy::Controllers::Controller::get_children()
{
    if(children.find("info") == children.end())
    {
        if(info != nullptr)
        {
            children["info"] = info.get();
        }
    }

    return children;
}

void Wanphy::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
}

Wanphy::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "wanphy";
}

Wanphy::Controllers::~Controllers()
{
}

bool Wanphy::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Wanphy::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Wanphy::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath Wanphy::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Wanphy::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Wanphy::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Wanphy::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Wanphy::Controllers::set_value(const std::string & value_path, std::string value)
{
}

Wanphy::Wanphy()
    :
    controllers(std::make_unique<Wanphy::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers.get();

    yang_name = "wanphy"; yang_parent_name = "Cisco-IOS-XR-wanphy-ui-oper";
}

Wanphy::~Wanphy()
{
}

bool Wanphy::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data());
}

bool Wanphy::has_operation() const
{
    return is_set(operation)
	|| (controllers !=  nullptr && is_set(controllers->operation));
}

std::string Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy";

    return path_buffer.str();

}

EntityPath Wanphy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
        else
        {
            controllers = std::make_unique<Wanphy::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers.get();
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Wanphy::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
    }

    return children;
}

void Wanphy::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Wanphy::clone_ptr()
{
    return std::make_unique<Wanphy>();
}

const Enum::Value WanphyAlarmRepStatusEnum::disable {0, "disable"};
const Enum::Value WanphyAlarmRepStatusEnum::enable {1, "enable"};

const Enum::Value WanphyModeInfoEnum::lan {0, "lan"};
const Enum::Value WanphyModeInfoEnum::wan {1, "wan"};


}
}

