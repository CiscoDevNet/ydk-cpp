
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_rsvp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_cfg {

Rsvp::Neighbors::Neighbor::Authentication::Authentication()
    :
    	enable{YType::boolean, "enable"},
	 key_chain{YType::str, "key-chain"},
	 life_time{YType::uint32, "life-time"},
	 window_size{YType::uint32, "window-size"}
{
    yang_name = "authentication"; yang_parent_name = "neighbor";
}

Rsvp::Neighbors::Neighbor::Authentication::~Authentication()
{
}

bool Rsvp::Neighbors::Neighbor::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Neighbors::Neighbor::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(key_chain.operation)
	|| is_set(life_time.operation)
	|| is_set(window_size.operation);
}

std::string Rsvp::Neighbors::Neighbor::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Rsvp::Neighbors::Neighbor::Authentication::get_entity_path(Entity* ancestor) const
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

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Neighbors::Neighbor::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Neighbors::Neighbor::Authentication::get_children()
{
    return children;
}

void Rsvp::Neighbors::Neighbor::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Rsvp::Neighbors::Neighbor::Neighbor()
    :
    	neighbor{YType::str, "neighbor"}
    	,
    authentication(std::make_unique<Rsvp::Neighbors::Neighbor::Authentication>())
{
    authentication->parent = this;
    children["authentication"] = authentication.get();

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Rsvp::Neighbors::Neighbor::~Neighbor()
{
}

bool Rsvp::Neighbors::Neighbor::has_data() const
{
    return neighbor.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Rsvp::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| (authentication !=  nullptr && is_set(authentication->operation));
}

std::string Rsvp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor='" <<neighbor.get() <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/neighbors/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Rsvp::Neighbors::Neighbor::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Neighbors::Neighbor::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    return children;
}

void Rsvp::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
}

Rsvp::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "rsvp";
}

Rsvp::Neighbors::~Neighbors()
{
}

bool Rsvp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Rsvp::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Rsvp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Rsvp::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::OutOfBand()
    :
    	missed_messages{YType::uint32, "missed-messages"},
	 refresh_interval{YType::uint32, "refresh-interval"}
{
    yang_name = "out-of-band"; yang_parent_name = "cntl-signalling";
}

Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::~OutOfBand()
{
}

bool Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::has_data() const
{
    return missed_messages.is_set
	|| refresh_interval.is_set;
}

bool Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::has_operation() const
{
    return is_set(operation)
	|| is_set(missed_messages.operation)
	|| is_set(refresh_interval.operation);
}

std::string Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-band";

    return path_buffer.str();

}

EntityPath Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_entity_path(Entity* ancestor) const
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

    if (missed_messages.is_set || is_set(missed_messages.operation)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.operation)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_children()
{
    return children;
}

void Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missed-messages")
    {
        missed_messages = value;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
    }
}

Rsvp::Controllers::Controller::CntlSignalling::CntlSignalling()
    :
    out_of_band(std::make_unique<Rsvp::Controllers::Controller::CntlSignalling::OutOfBand>())
{
    out_of_band->parent = this;
    children["out-of-band"] = out_of_band.get();

    yang_name = "cntl-signalling"; yang_parent_name = "controller";
}

Rsvp::Controllers::Controller::CntlSignalling::~CntlSignalling()
{
}

bool Rsvp::Controllers::Controller::CntlSignalling::has_data() const
{
    return (out_of_band !=  nullptr && out_of_band->has_data());
}

bool Rsvp::Controllers::Controller::CntlSignalling::has_operation() const
{
    return is_set(operation)
	|| (out_of_band !=  nullptr && is_set(out_of_band->operation));
}

std::string Rsvp::Controllers::Controller::CntlSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntl-signalling";

    return path_buffer.str();

}

EntityPath Rsvp::Controllers::Controller::CntlSignalling::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Controllers::Controller::CntlSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "out-of-band")
    {
        if(out_of_band != nullptr)
        {
            children["out-of-band"] = out_of_band.get();
        }
        else
        {
            out_of_band = std::make_unique<Rsvp::Controllers::Controller::CntlSignalling::OutOfBand>();
            out_of_band->parent = this;
            children["out-of-band"] = out_of_band.get();
        }
        return children.at("out-of-band");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Controllers::Controller::CntlSignalling::get_children()
{
    if(children.find("out-of-band") == children.end())
    {
        if(out_of_band != nullptr)
        {
            children["out-of-band"] = out_of_band.get();
        }
    }

    return children;
}

void Rsvp::Controllers::Controller::CntlSignalling::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::Controllers::Controller::Controller()
    :
    	controller_name{YType::str, "controller-name"},
	 enable{YType::empty, "enable"}
    	,
    cntl_signalling(std::make_unique<Rsvp::Controllers::Controller::CntlSignalling>())
{
    cntl_signalling->parent = this;
    children["cntl-signalling"] = cntl_signalling.get();

    yang_name = "controller"; yang_parent_name = "controllers";
}

Rsvp::Controllers::Controller::~Controller()
{
}

bool Rsvp::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| enable.is_set
	|| (cntl_signalling !=  nullptr && cntl_signalling->has_data());
}

bool Rsvp::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(enable.operation)
	|| (cntl_signalling !=  nullptr && is_set(cntl_signalling->operation));
}

std::string Rsvp::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/controllers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cntl-signalling")
    {
        if(cntl_signalling != nullptr)
        {
            children["cntl-signalling"] = cntl_signalling.get();
        }
        else
        {
            cntl_signalling = std::make_unique<Rsvp::Controllers::Controller::CntlSignalling>();
            cntl_signalling->parent = this;
            children["cntl-signalling"] = cntl_signalling.get();
        }
        return children.at("cntl-signalling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Controllers::Controller::get_children()
{
    if(children.find("cntl-signalling") == children.end())
    {
        if(cntl_signalling != nullptr)
        {
            children["cntl-signalling"] = cntl_signalling.get();
        }
    }

    return children;
}

void Rsvp::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Rsvp::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "rsvp";
}

Rsvp::Controllers::~Controllers()
{
}

bool Rsvp::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath Rsvp::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Rsvp::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Controllers::get_children()
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

void Rsvp::Controllers::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::GlobalLogging::GlobalLogging()
    :
    	log_issu_status{YType::empty, "log-issu-status"},
	 log_nsr_status{YType::empty, "log-nsr-status"}
{
    yang_name = "global-logging"; yang_parent_name = "rsvp";
}

Rsvp::GlobalLogging::~GlobalLogging()
{
}

bool Rsvp::GlobalLogging::has_data() const
{
    return log_issu_status.is_set
	|| log_nsr_status.is_set;
}

bool Rsvp::GlobalLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(log_issu_status.operation)
	|| is_set(log_nsr_status.operation);
}

std::string Rsvp::GlobalLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-logging";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_issu_status.is_set || is_set(log_issu_status.operation)) leaf_name_data.push_back(log_issu_status.get_name_leafdata());
    if (log_nsr_status.is_set || is_set(log_nsr_status.operation)) leaf_name_data.push_back(log_nsr_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::GlobalLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::GlobalLogging::get_children()
{
    return children;
}

void Rsvp::GlobalLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-issu-status")
    {
        log_issu_status = value;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status = value;
    }
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::Mam()
    :
    	bc0_percent{YType::uint32, "bc0-percent"},
	 bc1_percent{YType::uint32, "bc1-percent"},
	 max_res_percent{YType::uint32, "max-res-percent"}
{
    yang_name = "mam"; yang_parent_name = "default-interface-percent";
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::~Mam()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::has_data() const
{
    return bc0_percent.is_set
	|| bc1_percent.is_set
	|| max_res_percent.is_set;
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::has_operation() const
{
    return is_set(operation)
	|| is_set(bc0_percent.operation)
	|| is_set(bc1_percent.operation)
	|| is_set(max_res_percent.operation);
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/default-interface-percent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc0_percent.is_set || is_set(bc0_percent.operation)) leaf_name_data.push_back(bc0_percent.get_name_leafdata());
    if (bc1_percent.is_set || is_set(bc1_percent.operation)) leaf_name_data.push_back(bc1_percent.get_name_leafdata());
    if (max_res_percent.is_set || is_set(max_res_percent.operation)) leaf_name_data.push_back(max_res_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_children()
{
    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent = value;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent = value;
    }
    if(value_path == "max-res-percent")
    {
        max_res_percent = value;
    }
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::Rdm()
    :
    	bc0_percent{YType::uint32, "bc0-percent"},
	 bc1_percent{YType::uint32, "bc1-percent"}
{
    yang_name = "rdm"; yang_parent_name = "default-interface-percent";
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::~Rdm()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::has_data() const
{
    return bc0_percent.is_set
	|| bc1_percent.is_set;
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::has_operation() const
{
    return is_set(operation)
	|| is_set(bc0_percent.operation)
	|| is_set(bc1_percent.operation);
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdm";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/default-interface-percent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc0_percent.is_set || is_set(bc0_percent.operation)) leaf_name_data.push_back(bc0_percent.get_name_leafdata());
    if (bc1_percent.is_set || is_set(bc1_percent.operation)) leaf_name_data.push_back(bc1_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_children()
{
    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent = value;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent = value;
    }
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::DefaultInterfacePercent()
    :
    mam(std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam>())
	,rdm(std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm>())
{
    mam->parent = this;
    children["mam"] = mam.get();

    rdm->parent = this;
    children["rdm"] = rdm.get();

    yang_name = "default-interface-percent"; yang_parent_name = "global-bandwidth";
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::~DefaultInterfacePercent()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::has_data() const
{
    return (mam !=  nullptr && mam->has_data())
	|| (rdm !=  nullptr && rdm->has_data());
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::has_operation() const
{
    return is_set(operation)
	|| (mam !=  nullptr && is_set(mam->operation))
	|| (rdm !=  nullptr && is_set(rdm->operation));
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-interface-percent";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mam")
    {
        if(mam != nullptr)
        {
            children["mam"] = mam.get();
        }
        else
        {
            mam = std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam>();
            mam->parent = this;
            children["mam"] = mam.get();
        }
        return children.at("mam");
    }

    if(child_yang_name == "rdm")
    {
        if(rdm != nullptr)
        {
            children["rdm"] = rdm.get();
        }
        else
        {
            rdm = std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm>();
            rdm->parent = this;
            children["rdm"] = rdm.get();
        }
        return children.at("rdm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_children()
{
    if(children.find("mam") == children.end())
    {
        if(mam != nullptr)
        {
            children["mam"] = mam.get();
        }
    }

    if(children.find("rdm") == children.end())
    {
        if(rdm != nullptr)
        {
            children["rdm"] = rdm.get();
        }
    }

    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::GlobalBandwidth::GlobalBandwidth()
    :
    default_interface_percent(std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent>())
{
    default_interface_percent->parent = this;
    children["default-interface-percent"] = default_interface_percent.get();

    yang_name = "global-bandwidth"; yang_parent_name = "rsvp";
}

Rsvp::GlobalBandwidth::~GlobalBandwidth()
{
}

bool Rsvp::GlobalBandwidth::has_data() const
{
    return (default_interface_percent !=  nullptr && default_interface_percent->has_data());
}

bool Rsvp::GlobalBandwidth::has_operation() const
{
    return is_set(operation)
	|| (default_interface_percent !=  nullptr && is_set(default_interface_percent->operation));
}

std::string Rsvp::GlobalBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-bandwidth";

    return path_buffer.str();

}

EntityPath Rsvp::GlobalBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::GlobalBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-interface-percent")
    {
        if(default_interface_percent != nullptr)
        {
            children["default-interface-percent"] = default_interface_percent.get();
        }
        else
        {
            default_interface_percent = std::make_unique<Rsvp::GlobalBandwidth::DefaultInterfacePercent>();
            default_interface_percent->parent = this;
            children["default-interface-percent"] = default_interface_percent.get();
        }
        return children.at("default-interface-percent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::GlobalBandwidth::get_children()
{
    if(children.find("default-interface-percent") == children.end())
    {
        if(default_interface_percent != nullptr)
        {
            children["default-interface-percent"] = default_interface_percent.get();
        }
    }

    return children;
}

void Rsvp::GlobalBandwidth::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::RefreshReduction()
    :
    	bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
	 disable{YType::empty, "disable"},
	 reliable_ack_hold_time{YType::uint32, "reliable-ack-hold-time"},
	 reliable_ack_max_size{YType::uint32, "reliable-ack-max-size"},
	 reliable_retransmit_time{YType::uint32, "reliable-retransmit-time"},
	 reliable_s_refresh{YType::empty, "reliable-s-refresh"},
	 summary_max_size{YType::uint32, "summary-max-size"}
{
    yang_name = "refresh-reduction"; yang_parent_name = "if-signalling";
}

Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::~RefreshReduction()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::has_data() const
{
    return bundle_message_max_size.is_set
	|| disable.is_set
	|| reliable_ack_hold_time.is_set
	|| reliable_ack_max_size.is_set
	|| reliable_retransmit_time.is_set
	|| reliable_s_refresh.is_set
	|| summary_max_size.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_message_max_size.operation)
	|| is_set(disable.operation)
	|| is_set(reliable_ack_hold_time.operation)
	|| is_set(reliable_ack_max_size.operation)
	|| is_set(reliable_retransmit_time.operation)
	|| is_set(reliable_s_refresh.operation)
	|| is_set(summary_max_size.operation);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-reduction";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_entity_path(Entity* ancestor) const
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

    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.operation)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (reliable_ack_hold_time.is_set || is_set(reliable_ack_hold_time.operation)) leaf_name_data.push_back(reliable_ack_hold_time.get_name_leafdata());
    if (reliable_ack_max_size.is_set || is_set(reliable_ack_max_size.operation)) leaf_name_data.push_back(reliable_ack_max_size.get_name_leafdata());
    if (reliable_retransmit_time.is_set || is_set(reliable_retransmit_time.operation)) leaf_name_data.push_back(reliable_retransmit_time.get_name_leafdata());
    if (reliable_s_refresh.is_set || is_set(reliable_s_refresh.operation)) leaf_name_data.push_back(reliable_s_refresh.get_name_leafdata());
    if (summary_max_size.is_set || is_set(summary_max_size.operation)) leaf_name_data.push_back(summary_max_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "reliable-ack-hold-time")
    {
        reliable_ack_hold_time = value;
    }
    if(value_path == "reliable-ack-max-size")
    {
        reliable_ack_max_size = value;
    }
    if(value_path == "reliable-retransmit-time")
    {
        reliable_retransmit_time = value;
    }
    if(value_path == "reliable-s-refresh")
    {
        reliable_s_refresh = value;
    }
    if(value_path == "summary-max-size")
    {
        summary_max_size = value;
    }
}

Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::IntervalRate()
    :
    	interval_size{YType::uint32, "interval-size"},
	 messages_per_interval{YType::uint32, "messages-per-interval"}
{
    yang_name = "interval-rate"; yang_parent_name = "if-signalling";
}

Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::~IntervalRate()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::has_data() const
{
    return interval_size.is_set
	|| messages_per_interval.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::has_operation() const
{
    return is_set(operation)
	|| is_set(interval_size.operation)
	|| is_set(messages_per_interval.operation);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval-rate";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_entity_path(Entity* ancestor) const
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

    if (interval_size.is_set || is_set(interval_size.operation)) leaf_name_data.push_back(interval_size.get_name_leafdata());
    if (messages_per_interval.is_set || is_set(messages_per_interval.operation)) leaf_name_data.push_back(messages_per_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval-size")
    {
        interval_size = value;
    }
    if(value_path == "messages-per-interval")
    {
        messages_per_interval = value;
    }
}

Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::OutOfBand()
    :
    	missed_messages{YType::uint32, "missed-messages"},
	 refresh_interval{YType::uint32, "refresh-interval"}
{
    yang_name = "out-of-band"; yang_parent_name = "if-signalling";
}

Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::~OutOfBand()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::has_data() const
{
    return missed_messages.is_set
	|| refresh_interval.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::has_operation() const
{
    return is_set(operation)
	|| is_set(missed_messages.operation)
	|| is_set(refresh_interval.operation);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-band";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_entity_path(Entity* ancestor) const
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

    if (missed_messages.is_set || is_set(missed_messages.operation)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.operation)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missed-messages")
    {
        missed_messages = value;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
    }
}

Rsvp::Interfaces::Interface::IfSignalling::IfSignalling()
    :
    	dscp{YType::uint32, "dscp"},
	 hello_graceful_restart_if_based{YType::empty, "hello-graceful-restart-if-based"},
	 missed_messages{YType::uint32, "missed-messages"},
	 pacing{YType::empty, "pacing"},
	 refresh_interval{YType::uint32, "refresh-interval"}
    	,
    interval_rate(std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::IntervalRate>())
	,out_of_band(std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::OutOfBand>())
	,refresh_reduction(std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction>())
{
    interval_rate->parent = this;
    children["interval-rate"] = interval_rate.get();

    out_of_band->parent = this;
    children["out-of-band"] = out_of_band.get();

    refresh_reduction->parent = this;
    children["refresh-reduction"] = refresh_reduction.get();

    yang_name = "if-signalling"; yang_parent_name = "interface";
}

Rsvp::Interfaces::Interface::IfSignalling::~IfSignalling()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::has_data() const
{
    return dscp.is_set
	|| hello_graceful_restart_if_based.is_set
	|| missed_messages.is_set
	|| pacing.is_set
	|| refresh_interval.is_set
	|| (interval_rate !=  nullptr && interval_rate->has_data())
	|| (out_of_band !=  nullptr && out_of_band->has_data())
	|| (refresh_reduction !=  nullptr && refresh_reduction->has_data());
}

bool Rsvp::Interfaces::Interface::IfSignalling::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(hello_graceful_restart_if_based.operation)
	|| is_set(missed_messages.operation)
	|| is_set(pacing.operation)
	|| is_set(refresh_interval.operation)
	|| (interval_rate !=  nullptr && is_set(interval_rate->operation))
	|| (out_of_band !=  nullptr && is_set(out_of_band->operation))
	|| (refresh_reduction !=  nullptr && is_set(refresh_reduction->operation));
}

std::string Rsvp::Interfaces::Interface::IfSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-signalling";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::IfSignalling::get_entity_path(Entity* ancestor) const
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

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (hello_graceful_restart_if_based.is_set || is_set(hello_graceful_restart_if_based.operation)) leaf_name_data.push_back(hello_graceful_restart_if_based.get_name_leafdata());
    if (missed_messages.is_set || is_set(missed_messages.operation)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (pacing.is_set || is_set(pacing.operation)) leaf_name_data.push_back(pacing.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.operation)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::IfSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interval-rate")
    {
        if(interval_rate != nullptr)
        {
            children["interval-rate"] = interval_rate.get();
        }
        else
        {
            interval_rate = std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::IntervalRate>();
            interval_rate->parent = this;
            children["interval-rate"] = interval_rate.get();
        }
        return children.at("interval-rate");
    }

    if(child_yang_name == "out-of-band")
    {
        if(out_of_band != nullptr)
        {
            children["out-of-band"] = out_of_band.get();
        }
        else
        {
            out_of_band = std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::OutOfBand>();
            out_of_band->parent = this;
            children["out-of-band"] = out_of_band.get();
        }
        return children.at("out-of-band");
    }

    if(child_yang_name == "refresh-reduction")
    {
        if(refresh_reduction != nullptr)
        {
            children["refresh-reduction"] = refresh_reduction.get();
        }
        else
        {
            refresh_reduction = std::make_unique<Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction>();
            refresh_reduction->parent = this;
            children["refresh-reduction"] = refresh_reduction.get();
        }
        return children.at("refresh-reduction");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::IfSignalling::get_children()
{
    if(children.find("interval-rate") == children.end())
    {
        if(interval_rate != nullptr)
        {
            children["interval-rate"] = interval_rate.get();
        }
    }

    if(children.find("out-of-band") == children.end())
    {
        if(out_of_band != nullptr)
        {
            children["out-of-band"] = out_of_band.get();
        }
    }

    if(children.find("refresh-reduction") == children.end())
    {
        if(refresh_reduction != nullptr)
        {
            children["refresh-reduction"] = refresh_reduction.get();
        }
    }

    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "hello-graceful-restart-if-based")
    {
        hello_graceful_restart_if_based = value;
    }
    if(value_path == "missed-messages")
    {
        missed_messages = value;
    }
    if(value_path == "pacing")
    {
        pacing = value;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
    }
}

Rsvp::Interfaces::Interface::Bandwidth::Mam::Mam()
    :
    	bandwidth_mode{YType::enumeration, "bandwidth-mode"},
	 bc0_bandwidth{YType::uint32, "bc0-bandwidth"},
	 bc1_bandwidth{YType::uint32, "bc1-bandwidth"},
	 max_resv_bandwidth{YType::uint32, "max-resv-bandwidth"},
	 max_resv_flow{YType::uint32, "max-resv-flow"}
{
    yang_name = "mam"; yang_parent_name = "bandwidth";
}

Rsvp::Interfaces::Interface::Bandwidth::Mam::~Mam()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::Mam::has_data() const
{
    return bandwidth_mode.is_set
	|| bc0_bandwidth.is_set
	|| bc1_bandwidth.is_set
	|| max_resv_bandwidth.is_set
	|| max_resv_flow.is_set;
}

bool Rsvp::Interfaces::Interface::Bandwidth::Mam::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_mode.operation)
	|| is_set(bc0_bandwidth.operation)
	|| is_set(bc1_bandwidth.operation)
	|| is_set(max_resv_bandwidth.operation)
	|| is_set(max_resv_flow.operation);
}

std::string Rsvp::Interfaces::Interface::Bandwidth::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::Bandwidth::Mam::get_entity_path(Entity* ancestor) const
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

    if (bandwidth_mode.is_set || is_set(bandwidth_mode.operation)) leaf_name_data.push_back(bandwidth_mode.get_name_leafdata());
    if (bc0_bandwidth.is_set || is_set(bc0_bandwidth.operation)) leaf_name_data.push_back(bc0_bandwidth.get_name_leafdata());
    if (bc1_bandwidth.is_set || is_set(bc1_bandwidth.operation)) leaf_name_data.push_back(bc1_bandwidth.get_name_leafdata());
    if (max_resv_bandwidth.is_set || is_set(max_resv_bandwidth.operation)) leaf_name_data.push_back(max_resv_bandwidth.get_name_leafdata());
    if (max_resv_flow.is_set || is_set(max_resv_flow.operation)) leaf_name_data.push_back(max_resv_flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::Bandwidth::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::Bandwidth::Mam::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::Mam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode = value;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth = value;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth = value;
    }
    if(value_path == "max-resv-bandwidth")
    {
        max_resv_bandwidth = value;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow = value;
    }
}

Rsvp::Interfaces::Interface::Bandwidth::Rdm::Rdm()
    :
    	bandwidth_mode{YType::enumeration, "bandwidth-mode"},
	 bc0_bandwidth{YType::uint32, "bc0-bandwidth"},
	 bc0_keyword{YType::enumeration, "bc0-keyword"},
	 bc1_bandwidth{YType::uint32, "bc1-bandwidth"},
	 bc1_keyword{YType::enumeration, "bc1-keyword"},
	 max_resv_flow{YType::uint32, "max-resv-flow"},
	 rdm_keyword{YType::enumeration, "rdm-keyword"}
{
    yang_name = "rdm"; yang_parent_name = "bandwidth";
}

Rsvp::Interfaces::Interface::Bandwidth::Rdm::~Rdm()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::Rdm::has_data() const
{
    return bandwidth_mode.is_set
	|| bc0_bandwidth.is_set
	|| bc0_keyword.is_set
	|| bc1_bandwidth.is_set
	|| bc1_keyword.is_set
	|| max_resv_flow.is_set
	|| rdm_keyword.is_set;
}

bool Rsvp::Interfaces::Interface::Bandwidth::Rdm::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_mode.operation)
	|| is_set(bc0_bandwidth.operation)
	|| is_set(bc0_keyword.operation)
	|| is_set(bc1_bandwidth.operation)
	|| is_set(bc1_keyword.operation)
	|| is_set(max_resv_flow.operation)
	|| is_set(rdm_keyword.operation);
}

std::string Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdm";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_entity_path(Entity* ancestor) const
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

    if (bandwidth_mode.is_set || is_set(bandwidth_mode.operation)) leaf_name_data.push_back(bandwidth_mode.get_name_leafdata());
    if (bc0_bandwidth.is_set || is_set(bc0_bandwidth.operation)) leaf_name_data.push_back(bc0_bandwidth.get_name_leafdata());
    if (bc0_keyword.is_set || is_set(bc0_keyword.operation)) leaf_name_data.push_back(bc0_keyword.get_name_leafdata());
    if (bc1_bandwidth.is_set || is_set(bc1_bandwidth.operation)) leaf_name_data.push_back(bc1_bandwidth.get_name_leafdata());
    if (bc1_keyword.is_set || is_set(bc1_keyword.operation)) leaf_name_data.push_back(bc1_keyword.get_name_leafdata());
    if (max_resv_flow.is_set || is_set(max_resv_flow.operation)) leaf_name_data.push_back(max_resv_flow.get_name_leafdata());
    if (rdm_keyword.is_set || is_set(rdm_keyword.operation)) leaf_name_data.push_back(rdm_keyword.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::Rdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode = value;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth = value;
    }
    if(value_path == "bc0-keyword")
    {
        bc0_keyword = value;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth = value;
    }
    if(value_path == "bc1-keyword")
    {
        bc1_keyword = value;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow = value;
    }
    if(value_path == "rdm-keyword")
    {
        rdm_keyword = value;
    }
}

Rsvp::Interfaces::Interface::Bandwidth::Bandwidth()
    :
    mam(std::make_unique<Rsvp::Interfaces::Interface::Bandwidth::Mam>())
	,rdm(std::make_unique<Rsvp::Interfaces::Interface::Bandwidth::Rdm>())
{
    mam->parent = this;
    children["mam"] = mam.get();

    rdm->parent = this;
    children["rdm"] = rdm.get();

    yang_name = "bandwidth"; yang_parent_name = "interface";
}

Rsvp::Interfaces::Interface::Bandwidth::~Bandwidth()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::has_data() const
{
    return (mam !=  nullptr && mam->has_data())
	|| (rdm !=  nullptr && rdm->has_data());
}

bool Rsvp::Interfaces::Interface::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| (mam !=  nullptr && is_set(mam->operation))
	|| (rdm !=  nullptr && is_set(rdm->operation));
}

std::string Rsvp::Interfaces::Interface::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::Bandwidth::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mam")
    {
        if(mam != nullptr)
        {
            children["mam"] = mam.get();
        }
        else
        {
            mam = std::make_unique<Rsvp::Interfaces::Interface::Bandwidth::Mam>();
            mam->parent = this;
            children["mam"] = mam.get();
        }
        return children.at("mam");
    }

    if(child_yang_name == "rdm")
    {
        if(rdm != nullptr)
        {
            children["rdm"] = rdm.get();
        }
        else
        {
            rdm = std::make_unique<Rsvp::Interfaces::Interface::Bandwidth::Rdm>();
            rdm->parent = this;
            children["rdm"] = rdm.get();
        }
        return children.at("rdm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::Bandwidth::get_children()
{
    if(children.find("mam") == children.end())
    {
        if(mam != nullptr)
        {
            children["mam"] = mam.get();
        }
    }

    if(children.find("rdm") == children.end())
    {
        if(rdm != nullptr)
        {
            children["rdm"] = rdm.get();
        }
    }

    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::Interfaces::Interface::Authentication::Authentication()
    :
    	enable{YType::boolean, "enable"},
	 key_chain{YType::str, "key-chain"},
	 life_time{YType::uint32, "life-time"},
	 window_size{YType::uint32, "window-size"}
{
    yang_name = "authentication"; yang_parent_name = "interface";
}

Rsvp::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rsvp::Interfaces::Interface::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(key_chain.operation)
	|| is_set(life_time.operation)
	|| is_set(window_size.operation);
}

std::string Rsvp::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::Authentication::get_entity_path(Entity* ancestor) const
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

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::Authentication::get_children()
{
    return children;
}

void Rsvp::Interfaces::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Rsvp::Interfaces::Interface::Interface()
    :
    	name{YType::str, "name"},
	 enable{YType::empty, "enable"}
    	,
    authentication(std::make_unique<Rsvp::Interfaces::Interface::Authentication>())
	,bandwidth(std::make_unique<Rsvp::Interfaces::Interface::Bandwidth>())
	,if_signalling(std::make_unique<Rsvp::Interfaces::Interface::IfSignalling>())
{
    authentication->parent = this;
    children["authentication"] = authentication.get();

    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    if_signalling->parent = this;
    children["if-signalling"] = if_signalling.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rsvp::Interfaces::Interface::~Interface()
{
}

bool Rsvp::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (if_signalling !=  nullptr && if_signalling->has_data());
}

bool Rsvp::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation)
	|| (authentication !=  nullptr && is_set(authentication->operation))
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (if_signalling !=  nullptr && is_set(if_signalling->operation));
}

std::string Rsvp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Rsvp::Interfaces::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<Rsvp::Interfaces::Interface::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "if-signalling")
    {
        if(if_signalling != nullptr)
        {
            children["if-signalling"] = if_signalling.get();
        }
        else
        {
            if_signalling = std::make_unique<Rsvp::Interfaces::Interface::IfSignalling>();
            if_signalling->parent = this;
            children["if-signalling"] = if_signalling.get();
        }
        return children.at("if-signalling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Interfaces::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("if-signalling") == children.end())
    {
        if(if_signalling != nullptr)
        {
            children["if-signalling"] = if_signalling.get();
        }
    }

    return children;
}

void Rsvp::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Rsvp::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "rsvp";
}

Rsvp::Interfaces::~Interfaces()
{
}

bool Rsvp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rsvp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Rsvp::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Rsvp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Rsvp::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rsvp::Signalling::GlobalOutOfBand::GlobalOutOfBand()
    :
    	vrf{YType::str, "vrf"}
{
    yang_name = "global-out-of-band"; yang_parent_name = "signalling";
}

Rsvp::Signalling::GlobalOutOfBand::~GlobalOutOfBand()
{
}

bool Rsvp::Signalling::GlobalOutOfBand::has_data() const
{
    return vrf.is_set;
}

bool Rsvp::Signalling::GlobalOutOfBand::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Rsvp::Signalling::GlobalOutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-out-of-band";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::GlobalOutOfBand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::GlobalOutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Signalling::GlobalOutOfBand::get_children()
{
    return children;
}

void Rsvp::Signalling::GlobalOutOfBand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Rsvp::Signalling::GracefulRestart::GracefulRestart()
    :
    	enable{YType::boolean, "enable"},
	 recovery_time{YType::uint32, "recovery-time"},
	 restart_time{YType::uint32, "restart-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "signalling";
}

Rsvp::Signalling::GracefulRestart::~GracefulRestart()
{
}

bool Rsvp::Signalling::GracefulRestart::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set;
}

bool Rsvp::Signalling::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(recovery_time.operation)
	|| is_set(restart_time.operation);
}

std::string Rsvp::Signalling::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Signalling::GracefulRestart::get_children()
{
    return children;
}

void Rsvp::Signalling::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
}

Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::DefaultDenyAction()
    :
    	drop{YType::empty, "drop"}
{
    yang_name = "default-deny-action"; yang_parent_name = "prefix-filtering";
}

Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::~DefaultDenyAction()
{
}

bool Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::has_data() const
{
    return drop.is_set;
}

bool Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation);
}

std::string Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-deny-action";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/prefix-filtering/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_children()
{
    return children;
}

void Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
}

Rsvp::Signalling::PrefixFiltering::PrefixFiltering()
    :
    	acl{YType::str, "acl"}
    	,
    default_deny_action(std::make_unique<Rsvp::Signalling::PrefixFiltering::DefaultDenyAction>())
{
    default_deny_action->parent = this;
    children["default-deny-action"] = default_deny_action.get();

    yang_name = "prefix-filtering"; yang_parent_name = "signalling";
}

Rsvp::Signalling::PrefixFiltering::~PrefixFiltering()
{
}

bool Rsvp::Signalling::PrefixFiltering::has_data() const
{
    return acl.is_set
	|| (default_deny_action !=  nullptr && default_deny_action->has_data());
}

bool Rsvp::Signalling::PrefixFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| (default_deny_action !=  nullptr && is_set(default_deny_action->operation));
}

std::string Rsvp::Signalling::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::PrefixFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-deny-action")
    {
        if(default_deny_action != nullptr)
        {
            children["default-deny-action"] = default_deny_action.get();
        }
        else
        {
            default_deny_action = std::make_unique<Rsvp::Signalling::PrefixFiltering::DefaultDenyAction>();
            default_deny_action->parent = this;
            children["default-deny-action"] = default_deny_action.get();
        }
        return children.at("default-deny-action");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Signalling::PrefixFiltering::get_children()
{
    if(children.find("default-deny-action") == children.end())
    {
        if(default_deny_action != nullptr)
        {
            children["default-deny-action"] = default_deny_action.get();
        }
    }

    return children;
}

void Rsvp::Signalling::PrefixFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
}

Rsvp::Signalling::Pesr::Pesr()
    :
    	disable{YType::empty, "disable"}
{
    yang_name = "pesr"; yang_parent_name = "signalling";
}

Rsvp::Signalling::Pesr::~Pesr()
{
}

bool Rsvp::Signalling::Pesr::has_data() const
{
    return disable.is_set;
}

bool Rsvp::Signalling::Pesr::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Rsvp::Signalling::Pesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pesr";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::Pesr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::Pesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Signalling::Pesr::get_children()
{
    return children;
}

void Rsvp::Signalling::Pesr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Rsvp::Signalling::Checksum::Checksum()
    :
    	disable{YType::empty, "disable"}
{
    yang_name = "checksum"; yang_parent_name = "signalling";
}

Rsvp::Signalling::Checksum::~Checksum()
{
}

bool Rsvp::Signalling::Checksum::has_data() const
{
    return disable.is_set;
}

bool Rsvp::Signalling::Checksum::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Rsvp::Signalling::Checksum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checksum";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::Checksum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::Checksum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Signalling::Checksum::get_children()
{
    return children;
}

void Rsvp::Signalling::Checksum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Rsvp::Signalling::Signalling()
    :
    	hello_graceful_restart_interval{YType::uint32, "hello-graceful-restart-interval"},
	 hello_graceful_restart_misses{YType::uint32, "hello-graceful-restart-misses"}
    	,
    checksum(std::make_unique<Rsvp::Signalling::Checksum>())
	,global_out_of_band(std::make_unique<Rsvp::Signalling::GlobalOutOfBand>())
	,graceful_restart(std::make_unique<Rsvp::Signalling::GracefulRestart>())
	,pesr(std::make_unique<Rsvp::Signalling::Pesr>())
	,prefix_filtering(std::make_unique<Rsvp::Signalling::PrefixFiltering>())
{
    checksum->parent = this;
    children["checksum"] = checksum.get();

    global_out_of_band->parent = this;
    children["global-out-of-band"] = global_out_of_band.get();

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart.get();

    pesr->parent = this;
    children["pesr"] = pesr.get();

    prefix_filtering->parent = this;
    children["prefix-filtering"] = prefix_filtering.get();

    yang_name = "signalling"; yang_parent_name = "rsvp";
}

Rsvp::Signalling::~Signalling()
{
}

bool Rsvp::Signalling::has_data() const
{
    return hello_graceful_restart_interval.is_set
	|| hello_graceful_restart_misses.is_set
	|| (checksum !=  nullptr && checksum->has_data())
	|| (global_out_of_band !=  nullptr && global_out_of_band->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (pesr !=  nullptr && pesr->has_data())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_data());
}

bool Rsvp::Signalling::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_graceful_restart_interval.operation)
	|| is_set(hello_graceful_restart_misses.operation)
	|| (checksum !=  nullptr && is_set(checksum->operation))
	|| (global_out_of_band !=  nullptr && is_set(global_out_of_band->operation))
	|| (graceful_restart !=  nullptr && is_set(graceful_restart->operation))
	|| (pesr !=  nullptr && is_set(pesr->operation))
	|| (prefix_filtering !=  nullptr && is_set(prefix_filtering->operation));
}

std::string Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

EntityPath Rsvp::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_graceful_restart_interval.is_set || is_set(hello_graceful_restart_interval.operation)) leaf_name_data.push_back(hello_graceful_restart_interval.get_name_leafdata());
    if (hello_graceful_restart_misses.is_set || is_set(hello_graceful_restart_misses.operation)) leaf_name_data.push_back(hello_graceful_restart_misses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checksum")
    {
        if(checksum != nullptr)
        {
            children["checksum"] = checksum.get();
        }
        else
        {
            checksum = std::make_unique<Rsvp::Signalling::Checksum>();
            checksum->parent = this;
            children["checksum"] = checksum.get();
        }
        return children.at("checksum");
    }

    if(child_yang_name == "global-out-of-band")
    {
        if(global_out_of_band != nullptr)
        {
            children["global-out-of-band"] = global_out_of_band.get();
        }
        else
        {
            global_out_of_band = std::make_unique<Rsvp::Signalling::GlobalOutOfBand>();
            global_out_of_band->parent = this;
            children["global-out-of-band"] = global_out_of_band.get();
        }
        return children.at("global-out-of-band");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
        else
        {
            graceful_restart = std::make_unique<Rsvp::Signalling::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart.get();
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "pesr")
    {
        if(pesr != nullptr)
        {
            children["pesr"] = pesr.get();
        }
        else
        {
            pesr = std::make_unique<Rsvp::Signalling::Pesr>();
            pesr->parent = this;
            children["pesr"] = pesr.get();
        }
        return children.at("pesr");
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering != nullptr)
        {
            children["prefix-filtering"] = prefix_filtering.get();
        }
        else
        {
            prefix_filtering = std::make_unique<Rsvp::Signalling::PrefixFiltering>();
            prefix_filtering->parent = this;
            children["prefix-filtering"] = prefix_filtering.get();
        }
        return children.at("prefix-filtering");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::Signalling::get_children()
{
    if(children.find("checksum") == children.end())
    {
        if(checksum != nullptr)
        {
            children["checksum"] = checksum.get();
        }
    }

    if(children.find("global-out-of-band") == children.end())
    {
        if(global_out_of_band != nullptr)
        {
            children["global-out-of-band"] = global_out_of_band.get();
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
    }

    if(children.find("pesr") == children.end())
    {
        if(pesr != nullptr)
        {
            children["pesr"] = pesr.get();
        }
    }

    if(children.find("prefix-filtering") == children.end())
    {
        if(prefix_filtering != nullptr)
        {
            children["prefix-filtering"] = prefix_filtering.get();
        }
    }

    return children;
}

void Rsvp::Signalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-graceful-restart-interval")
    {
        hello_graceful_restart_interval = value;
    }
    if(value_path == "hello-graceful-restart-misses")
    {
        hello_graceful_restart_misses = value;
    }
}

Rsvp::Authentication::Authentication()
    :
    	enable{YType::boolean, "enable"},
	 key_chain{YType::str, "key-chain"},
	 life_time{YType::uint32, "life-time"},
	 window_size{YType::uint32, "window-size"}
{
    yang_name = "authentication"; yang_parent_name = "rsvp";
}

Rsvp::Authentication::~Authentication()
{
}

bool Rsvp::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(key_chain.operation)
	|| is_set(life_time.operation)
	|| is_set(window_size.operation);
}

std::string Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Rsvp::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rsvp::Authentication::get_children()
{
    return children;
}

void Rsvp::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Rsvp::Rsvp()
    :
    authentication(std::make_unique<Rsvp::Authentication>())
	,controllers(std::make_unique<Rsvp::Controllers>())
	,global_bandwidth(std::make_unique<Rsvp::GlobalBandwidth>())
	,global_logging(std::make_unique<Rsvp::GlobalLogging>())
	,interfaces(std::make_unique<Rsvp::Interfaces>())
	,neighbors(std::make_unique<Rsvp::Neighbors>())
	,signalling(std::make_unique<Rsvp::Signalling>())
{
    authentication->parent = this;
    children["authentication"] = authentication.get();

    controllers->parent = this;
    children["controllers"] = controllers.get();

    global_bandwidth->parent = this;
    children["global-bandwidth"] = global_bandwidth.get();

    global_logging->parent = this;
    children["global-logging"] = global_logging.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    neighbors->parent = this;
    children["neighbors"] = neighbors.get();

    signalling->parent = this;
    children["signalling"] = signalling.get();

    yang_name = "rsvp"; yang_parent_name = "Cisco-IOS-XR-ip-rsvp-cfg";
}

Rsvp::~Rsvp()
{
}

bool Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (controllers !=  nullptr && controllers->has_data())
	|| (global_bandwidth !=  nullptr && global_bandwidth->has_data())
	|| (global_logging !=  nullptr && global_logging->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Rsvp::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && is_set(authentication->operation))
	|| (controllers !=  nullptr && is_set(controllers->operation))
	|| (global_bandwidth !=  nullptr && is_set(global_bandwidth->operation))
	|| (global_logging !=  nullptr && is_set(global_logging->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (neighbors !=  nullptr && is_set(neighbors->operation))
	|| (signalling !=  nullptr && is_set(signalling->operation));
}

std::string Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp";

    return path_buffer.str();

}

EntityPath Rsvp::get_entity_path(Entity* ancestor) const
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

Entity* Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Rsvp::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
        else
        {
            controllers = std::make_unique<Rsvp::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers.get();
        }
        return children.at("controllers");
    }

    if(child_yang_name == "global-bandwidth")
    {
        if(global_bandwidth != nullptr)
        {
            children["global-bandwidth"] = global_bandwidth.get();
        }
        else
        {
            global_bandwidth = std::make_unique<Rsvp::GlobalBandwidth>();
            global_bandwidth->parent = this;
            children["global-bandwidth"] = global_bandwidth.get();
        }
        return children.at("global-bandwidth");
    }

    if(child_yang_name == "global-logging")
    {
        if(global_logging != nullptr)
        {
            children["global-logging"] = global_logging.get();
        }
        else
        {
            global_logging = std::make_unique<Rsvp::GlobalLogging>();
            global_logging->parent = this;
            children["global-logging"] = global_logging.get();
        }
        return children.at("global-logging");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Rsvp::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
        else
        {
            neighbors = std::make_unique<Rsvp::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors.get();
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "signalling")
    {
        if(signalling != nullptr)
        {
            children["signalling"] = signalling.get();
        }
        else
        {
            signalling = std::make_unique<Rsvp::Signalling>();
            signalling->parent = this;
            children["signalling"] = signalling.get();
        }
        return children.at("signalling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rsvp::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
    }

    if(children.find("global-bandwidth") == children.end())
    {
        if(global_bandwidth != nullptr)
        {
            children["global-bandwidth"] = global_bandwidth.get();
        }
    }

    if(children.find("global-logging") == children.end())
    {
        if(global_logging != nullptr)
        {
            children["global-logging"] = global_logging.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
    }

    if(children.find("signalling") == children.end())
    {
        if(signalling != nullptr)
        {
            children["signalling"] = signalling.get();
        }
    }

    return children;
}

void Rsvp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Rsvp::clone_ptr()
{
    return std::make_unique<Rsvp>();
}

const Enum::Value RsvpBwCfgEnum::absolute {0, "absolute"};
const Enum::Value RsvpBwCfgEnum::percentage {1, "percentage"};

const Enum::Value RsvpBc0Enum::bc0 {1, "bc0"};
const Enum::Value RsvpBc0Enum::global_pool {2, "global-pool"};
const Enum::Value RsvpBc0Enum::not_specified {3, "not-specified"};

const Enum::Value RsvpBc1Enum::bc1 {1, "bc1"};
const Enum::Value RsvpBc1Enum::sub_pool {2, "sub-pool"};

const Enum::Value RsvpRdmEnum::rdm {1, "rdm"};
const Enum::Value RsvpRdmEnum::not_specified {2, "not-specified"};
const Enum::Value RsvpRdmEnum::use_default_bandwidth {3, "use-default-bandwidth"};


}
}

