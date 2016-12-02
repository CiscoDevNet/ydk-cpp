
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_prm_server_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_prm_server_oper {

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::Index_()
    :
    	index_{YType::int32, "index"},
	 accepted{YType::uint32, "accepted"},
	 burst{YType::uint32, "burst"},
	 cos_q{YType::uint8, "cos-q"},
	 cos_q_name{YType::str, "cos-q-name"},
	 dropped{YType::uint32, "dropped"},
	 flow_rate{YType::uint32, "flow-rate"},
	 rx_channel{YType::uint32, "rx-channel"}
{
    yang_name = "index"; yang_parent_name = "indexes";
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::~Index_()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::has_data() const
{
    return index_.is_set
	|| accepted.is_set
	|| burst.is_set
	|| cos_q.is_set
	|| cos_q_name.is_set
	|| dropped.is_set
	|| flow_rate.is_set
	|| rx_channel.is_set;
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(accepted.operation)
	|| is_set(burst.operation)
	|| is_set(cos_q.operation)
	|| is_set(cos_q_name.operation)
	|| is_set(dropped.operation)
	|| is_set(flow_rate.operation)
	|| is_set(rx_channel.operation);
}

std::string HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (accepted.is_set || is_set(accepted.operation)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (cos_q.is_set || is_set(cos_q.operation)) leaf_name_data.push_back(cos_q.get_name_leafdata());
    if (cos_q_name.is_set || is_set(cos_q_name.operation)) leaf_name_data.push_back(cos_q_name.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (flow_rate.is_set || is_set(flow_rate.operation)) leaf_name_data.push_back(flow_rate.get_name_leafdata());
    if (rx_channel.is_set || is_set(rx_channel.operation)) leaf_name_data.push_back(rx_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_children()
{
    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "accepted")
    {
        accepted = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "cos-q")
    {
        cos_q = value;
    }
    if(value_path == "cos-q-name")
    {
        cos_q_name = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "flow-rate")
    {
        flow_rate = value;
    }
    if(value_path == "rx-channel")
    {
        rx_channel = value;
    }
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Indexes()
{
    yang_name = "indexes"; yang_parent_name = "cpu";
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::~Indexes()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_>();
        c->parent = this;
        index_.push_back(std::move(c));
        children[segment_path] = index_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_children()
{
    for (auto const & c : index_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Np::Cpu::Cpu()
    :
    indexes(std::make_unique<HardwareModule::Nodes::Node::Np::Cpu::Indexes>())
{
    indexes->parent = this;
    children["indexes"] = indexes.get();

    yang_name = "cpu"; yang_parent_name = "np";
}

HardwareModule::Nodes::Node::Np::Cpu::~Cpu()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::has_data() const
{
    return (indexes !=  nullptr && indexes->has_data());
}

bool HardwareModule::Nodes::Node::Np::Cpu::has_operation() const
{
    return is_set(operation)
	|| (indexes !=  nullptr && is_set(indexes->operation));
}

std::string HardwareModule::Nodes::Node::Np::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::Cpu::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "indexes")
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes.get();
        }
        else
        {
            indexes = std::make_unique<HardwareModule::Nodes::Node::Np::Cpu::Indexes>();
            indexes->parent = this;
            children["indexes"] = indexes.get();
        }
        return children.at("indexes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::Cpu::get_children()
{
    if(children.find("indexes") == children.end())
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::Indx()
    :
    	index_{YType::int32, "index"},
	 buffer_len{YType::uint32, "buffer-len"},
	 captured_pak{YType::str, "captured-pak"},
	 days{YType::uint64, "days"},
	 hours{YType::uint64, "hours"},
	 ifhandle{YType::uint32, "ifhandle"},
	 mins{YType::uint64, "mins"},
	 pkt_index{YType::uint8, "pkt-index"},
	 reason{YType::uint32, "reason"},
	 reason_hi{YType::uint32, "reason-hi"},
	 secs{YType::uint64, "secs"},
	 total_captured{YType::uint32, "total-captured"},
	 years{YType::uint64, "years"}
{
    yang_name = "indx"; yang_parent_name = "indxes";
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::~Indx()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::has_data() const
{
    return index_.is_set
	|| buffer_len.is_set
	|| captured_pak.is_set
	|| days.is_set
	|| hours.is_set
	|| ifhandle.is_set
	|| mins.is_set
	|| pkt_index.is_set
	|| reason.is_set
	|| reason_hi.is_set
	|| secs.is_set
	|| total_captured.is_set
	|| years.is_set;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(buffer_len.operation)
	|| is_set(captured_pak.operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(ifhandle.operation)
	|| is_set(mins.operation)
	|| is_set(pkt_index.operation)
	|| is_set(reason.operation)
	|| is_set(reason_hi.operation)
	|| is_set(secs.operation)
	|| is_set(total_captured.operation)
	|| is_set(years.operation);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indx" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (buffer_len.is_set || is_set(buffer_len.operation)) leaf_name_data.push_back(buffer_len.get_name_leafdata());
    if (captured_pak.is_set || is_set(captured_pak.operation)) leaf_name_data.push_back(captured_pak.get_name_leafdata());
    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.operation)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (mins.is_set || is_set(mins.operation)) leaf_name_data.push_back(mins.get_name_leafdata());
    if (pkt_index.is_set || is_set(pkt_index.operation)) leaf_name_data.push_back(pkt_index.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reason_hi.is_set || is_set(reason_hi.operation)) leaf_name_data.push_back(reason_hi.get_name_leafdata());
    if (secs.is_set || is_set(secs.operation)) leaf_name_data.push_back(secs.get_name_leafdata());
    if (total_captured.is_set || is_set(total_captured.operation)) leaf_name_data.push_back(total_captured.get_name_leafdata());
    if (years.is_set || is_set(years.operation)) leaf_name_data.push_back(years.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_children()
{
    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "buffer-len")
    {
        buffer_len = value;
    }
    if(value_path == "captured-pak")
    {
        captured_pak = value;
    }
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
    }
    if(value_path == "mins")
    {
        mins = value;
    }
    if(value_path == "pkt-index")
    {
        pkt_index = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "reason-hi")
    {
        reason_hi = value;
    }
    if(value_path == "secs")
    {
        secs = value;
    }
    if(value_path == "total-captured")
    {
        total_captured = value;
    }
    if(value_path == "years")
    {
        years = value;
    }
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indxes()
{
    yang_name = "indxes"; yang_parent_name = "platform-drop";
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::~Indxes()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::has_data() const
{
    for (std::size_t index=0; index<indx.size(); index++)
    {
        if(indx[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::has_operation() const
{
    for (std::size_t index=0; index<indx.size(); index++)
    {
        if(indx[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indxes";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "indx")
    {
        for(auto const & c : indx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx>();
        c->parent = this;
        indx.push_back(std::move(c));
        children[segment_path] = indx.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_children()
{
    for (auto const & c : indx)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::Idx()
    :
    	index_{YType::int32, "index"},
	 counters{YType::uint32, "counters"},
	 drop_reason{YType::str, "drop-reason"}
{
    yang_name = "idx"; yang_parent_name = "idxes";
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::~Idx()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::has_data() const
{
    return index_.is_set
	|| counters.is_set
	|| drop_reason.is_set;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(counters.operation)
	|| is_set(drop_reason.operation);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idx" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (counters.is_set || is_set(counters.operation)) leaf_name_data.push_back(counters.get_name_leafdata());
    if (drop_reason.is_set || is_set(drop_reason.operation)) leaf_name_data.push_back(drop_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_children()
{
    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "counters")
    {
        counters = value;
    }
    if(value_path == "drop-reason")
    {
        drop_reason = value;
    }
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idxes()
{
    yang_name = "idxes"; yang_parent_name = "platform-drop";
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::~Idxes()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::has_data() const
{
    for (std::size_t index=0; index<idx.size(); index++)
    {
        if(idx[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::has_operation() const
{
    for (std::size_t index=0; index<idx.size(); index++)
    {
        if(idx[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idxes";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idx")
    {
        for(auto const & c : idx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx>();
        c->parent = this;
        idx.push_back(std::move(c));
        children[segment_path] = idx.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_children()
{
    for (auto const & c : idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Np::PlatformDrop::PlatformDrop()
    :
    idxes(std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes>())
	,indxes(std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes>())
{
    idxes->parent = this;
    children["idxes"] = idxes.get();

    indxes->parent = this;
    children["indxes"] = indxes.get();

    yang_name = "platform-drop"; yang_parent_name = "np";
}

HardwareModule::Nodes::Node::Np::PlatformDrop::~PlatformDrop()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::has_data() const
{
    return (idxes !=  nullptr && idxes->has_data())
	|| (indxes !=  nullptr && indxes->has_data());
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::has_operation() const
{
    return is_set(operation)
	|| (idxes !=  nullptr && is_set(idxes->operation))
	|| (indxes !=  nullptr && is_set(indxes->operation));
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-drop";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::PlatformDrop::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::PlatformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idxes")
    {
        if(idxes != nullptr)
        {
            children["idxes"] = idxes.get();
        }
        else
        {
            idxes = std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes>();
            idxes->parent = this;
            children["idxes"] = idxes.get();
        }
        return children.at("idxes");
    }

    if(child_yang_name == "indxes")
    {
        if(indxes != nullptr)
        {
            children["indxes"] = indxes.get();
        }
        else
        {
            indxes = std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes>();
            indxes->parent = this;
            children["indxes"] = indxes.get();
        }
        return children.at("indxes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::PlatformDrop::get_children()
{
    if(children.find("idxes") == children.end())
    {
        if(idxes != nullptr)
        {
            children["idxes"] = idxes.get();
        }
    }

    if(children.find("indxes") == children.end())
    {
        if(indxes != nullptr)
        {
            children["indxes"] = indxes.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Np::Np()
    :
    cpu(std::make_unique<HardwareModule::Nodes::Node::Np::Cpu>())
	,platform_drop(std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop>())
{
    cpu->parent = this;
    children["cpu"] = cpu.get();

    platform_drop->parent = this;
    children["platform-drop"] = platform_drop.get();

    yang_name = "np"; yang_parent_name = "node";
}

HardwareModule::Nodes::Node::Np::~Np()
{
}

bool HardwareModule::Nodes::Node::Np::has_data() const
{
    return (cpu !=  nullptr && cpu->has_data())
	|| (platform_drop !=  nullptr && platform_drop->has_data());
}

bool HardwareModule::Nodes::Node::Np::has_operation() const
{
    return is_set(operation)
	|| (cpu !=  nullptr && is_set(cpu->operation))
	|| (platform_drop !=  nullptr && is_set(platform_drop->operation));
}

std::string HardwareModule::Nodes::Node::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::Np::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::Nodes::Node::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cpu")
    {
        if(cpu != nullptr)
        {
            children["cpu"] = cpu.get();
        }
        else
        {
            cpu = std::make_unique<HardwareModule::Nodes::Node::Np::Cpu>();
            cpu->parent = this;
            children["cpu"] = cpu.get();
        }
        return children.at("cpu");
    }

    if(child_yang_name == "platform-drop")
    {
        if(platform_drop != nullptr)
        {
            children["platform-drop"] = platform_drop.get();
        }
        else
        {
            platform_drop = std::make_unique<HardwareModule::Nodes::Node::Np::PlatformDrop>();
            platform_drop->parent = this;
            children["platform-drop"] = platform_drop.get();
        }
        return children.at("platform-drop");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::Np::get_children()
{
    if(children.find("cpu") == children.end())
    {
        if(cpu != nullptr)
        {
            children["cpu"] = cpu.get();
        }
    }

    if(children.find("platform-drop") == children.end())
    {
        if(platform_drop != nullptr)
        {
            children["platform-drop"] = platform_drop.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    np(std::make_unique<HardwareModule::Nodes::Node::Np>())
{
    np->parent = this;
    children["np"] = np.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModule::Nodes::Node::~Node()
{
}

bool HardwareModule::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (np !=  nullptr && np->has_data());
}

bool HardwareModule::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (np !=  nullptr && is_set(np->operation));
}

std::string HardwareModule::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np")
    {
        if(np != nullptr)
        {
            children["np"] = np.get();
        }
        else
        {
            np = std::make_unique<HardwareModule::Nodes::Node::Np>();
            np->parent = this;
            children["np"] = np.get();
        }
        return children.at("np");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::Node::get_children()
{
    if(children.find("np") == children.end())
    {
        if(np != nullptr)
        {
            children["np"] = np.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

HardwareModule::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module";
}

HardwareModule::Nodes::~Nodes()
{
}

bool HardwareModule::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModule::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModule::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModule::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModule::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModule::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModule::HardwareModule()
    :
    nodes(std::make_unique<HardwareModule::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-prm-server-oper";
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModule::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module";

    return path_buffer.str();

}

EntityPath HardwareModule::get_entity_path(Entity* ancestor) const
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

Entity* HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<HardwareModule::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModule::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void HardwareModule::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModule::clone_ptr()
{
    return std::make_unique<HardwareModule>();
}
Prm::Nodes::Node::Server::Resource::Indexes::Index_::Index_()
    :
    	index_{YType::int32, "index"},
	 availability_status{YType::boolean, "availability-status"},
	 first_available_index{YType::uint32, "first-available-index"},
	 flags{YType::uint8, "flags"},
	 free_num{YType::uint32, "free-num"},
	 inconsistent{YType::boolean, "inconsistent"},
	 resource_name{YType::str, "resource-name"},
	 resource_type{YType::uint32, "resource-type"},
	 start_index{YType::uint32, "start-index"},
	 total_num{YType::uint32, "total-num"}
{
    yang_name = "index"; yang_parent_name = "indexes";
}

Prm::Nodes::Node::Server::Resource::Indexes::Index_::~Index_()
{
}

bool Prm::Nodes::Node::Server::Resource::Indexes::Index_::has_data() const
{
    return index_.is_set
	|| availability_status.is_set
	|| first_available_index.is_set
	|| flags.is_set
	|| free_num.is_set
	|| inconsistent.is_set
	|| resource_name.is_set
	|| resource_type.is_set
	|| start_index.is_set
	|| total_num.is_set;
}

bool Prm::Nodes::Node::Server::Resource::Indexes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(availability_status.operation)
	|| is_set(first_available_index.operation)
	|| is_set(flags.operation)
	|| is_set(free_num.operation)
	|| is_set(inconsistent.operation)
	|| is_set(resource_name.operation)
	|| is_set(resource_type.operation)
	|| is_set(start_index.operation)
	|| is_set(total_num.operation);
}

std::string Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (availability_status.is_set || is_set(availability_status.operation)) leaf_name_data.push_back(availability_status.get_name_leafdata());
    if (first_available_index.is_set || is_set(first_available_index.operation)) leaf_name_data.push_back(first_available_index.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (free_num.is_set || is_set(free_num.operation)) leaf_name_data.push_back(free_num.get_name_leafdata());
    if (inconsistent.is_set || is_set(inconsistent.operation)) leaf_name_data.push_back(inconsistent.get_name_leafdata());
    if (resource_name.is_set || is_set(resource_name.operation)) leaf_name_data.push_back(resource_name.get_name_leafdata());
    if (resource_type.is_set || is_set(resource_type.operation)) leaf_name_data.push_back(resource_type.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.operation)) leaf_name_data.push_back(start_index.get_name_leafdata());
    if (total_num.is_set || is_set(total_num.operation)) leaf_name_data.push_back(total_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_children()
{
    return children;
}

void Prm::Nodes::Node::Server::Resource::Indexes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "availability-status")
    {
        availability_status = value;
    }
    if(value_path == "first-available-index")
    {
        first_available_index = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "free-num")
    {
        free_num = value;
    }
    if(value_path == "inconsistent")
    {
        inconsistent = value;
    }
    if(value_path == "resource-name")
    {
        resource_name = value;
    }
    if(value_path == "resource-type")
    {
        resource_type = value;
    }
    if(value_path == "start-index")
    {
        start_index = value;
    }
    if(value_path == "total-num")
    {
        total_num = value;
    }
}

Prm::Nodes::Node::Server::Resource::Indexes::Indexes()
{
    yang_name = "indexes"; yang_parent_name = "resource";
}

Prm::Nodes::Node::Server::Resource::Indexes::~Indexes()
{
}

bool Prm::Nodes::Node::Server::Resource::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool Prm::Nodes::Node::Server::Resource::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Prm::Nodes::Node::Server::Resource::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";

    return path_buffer.str();

}

EntityPath Prm::Nodes::Node::Server::Resource::Indexes::get_entity_path(Entity* ancestor) const
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

Entity* Prm::Nodes::Node::Server::Resource::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Prm::Nodes::Node::Server::Resource::Indexes::Index_>();
        c->parent = this;
        index_.push_back(std::move(c));
        children[segment_path] = index_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::Nodes::Node::Server::Resource::Indexes::get_children()
{
    for (auto const & c : index_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Prm::Nodes::Node::Server::Resource::Indexes::set_value(const std::string & value_path, std::string value)
{
}

Prm::Nodes::Node::Server::Resource::Resource()
    :
    indexes(std::make_unique<Prm::Nodes::Node::Server::Resource::Indexes>())
{
    indexes->parent = this;
    children["indexes"] = indexes.get();

    yang_name = "resource"; yang_parent_name = "server";
}

Prm::Nodes::Node::Server::Resource::~Resource()
{
}

bool Prm::Nodes::Node::Server::Resource::has_data() const
{
    return (indexes !=  nullptr && indexes->has_data());
}

bool Prm::Nodes::Node::Server::Resource::has_operation() const
{
    return is_set(operation)
	|| (indexes !=  nullptr && is_set(indexes->operation));
}

std::string Prm::Nodes::Node::Server::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";

    return path_buffer.str();

}

EntityPath Prm::Nodes::Node::Server::Resource::get_entity_path(Entity* ancestor) const
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

Entity* Prm::Nodes::Node::Server::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "indexes")
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes.get();
        }
        else
        {
            indexes = std::make_unique<Prm::Nodes::Node::Server::Resource::Indexes>();
            indexes->parent = this;
            children["indexes"] = indexes.get();
        }
        return children.at("indexes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::Nodes::Node::Server::Resource::get_children()
{
    if(children.find("indexes") == children.end())
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes.get();
        }
    }

    return children;
}

void Prm::Nodes::Node::Server::Resource::set_value(const std::string & value_path, std::string value)
{
}

Prm::Nodes::Node::Server::Server()
    :
    resource(std::make_unique<Prm::Nodes::Node::Server::Resource>())
{
    resource->parent = this;
    children["resource"] = resource.get();

    yang_name = "server"; yang_parent_name = "node";
}

Prm::Nodes::Node::Server::~Server()
{
}

bool Prm::Nodes::Node::Server::has_data() const
{
    return (resource !=  nullptr && resource->has_data());
}

bool Prm::Nodes::Node::Server::has_operation() const
{
    return is_set(operation)
	|| (resource !=  nullptr && is_set(resource->operation));
}

std::string Prm::Nodes::Node::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Prm::Nodes::Node::Server::get_entity_path(Entity* ancestor) const
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

Entity* Prm::Nodes::Node::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "resource")
    {
        if(resource != nullptr)
        {
            children["resource"] = resource.get();
        }
        else
        {
            resource = std::make_unique<Prm::Nodes::Node::Server::Resource>();
            resource->parent = this;
            children["resource"] = resource.get();
        }
        return children.at("resource");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::Nodes::Node::Server::get_children()
{
    if(children.find("resource") == children.end())
    {
        if(resource != nullptr)
        {
            children["resource"] = resource.get();
        }
    }

    return children;
}

void Prm::Nodes::Node::Server::set_value(const std::string & value_path, std::string value)
{
}

Prm::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    server(std::make_unique<Prm::Nodes::Node::Server>())
{
    server->parent = this;
    children["server"] = server.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Prm::Nodes::Node::~Node()
{
}

bool Prm::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (server !=  nullptr && server->has_data());
}

bool Prm::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (server !=  nullptr && is_set(server->operation));
}

std::string Prm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Prm::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-prm-server-oper:prm/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Prm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<Prm::Nodes::Node::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::Nodes::Node::get_children()
{
    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void Prm::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Prm::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "prm";
}

Prm::Nodes::~Nodes()
{
}

bool Prm::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Prm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Prm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Prm::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-prm-server-oper:prm/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Prm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Prm::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Prm::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Prm::Prm()
    :
    nodes(std::make_unique<Prm::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "prm"; yang_parent_name = "Cisco-IOS-XR-prm-server-oper";
}

Prm::~Prm()
{
}

bool Prm::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Prm::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Prm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:prm";

    return path_buffer.str();

}

EntityPath Prm::get_entity_path(Entity* ancestor) const
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

Entity* Prm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Prm::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Prm::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Prm::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Prm::clone_ptr()
{
    return std::make_unique<Prm>();
}


}
}

