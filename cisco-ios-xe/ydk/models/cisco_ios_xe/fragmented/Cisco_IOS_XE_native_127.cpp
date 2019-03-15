
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_127.hpp"
#include "Cisco_IOS_XE_native_128.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::Algorithm()
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::Authentication()
{

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
        ,
    d3p(nullptr) // presence node
    , ipsec(this, {"sequence"})
    , pair_wise_keying(nullptr) // presence node
{

    yang_name = "sa"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec>();
        ent_->parent = this;
        ipsec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(d3p != nullptr)
    {
        _children["d3p"] = d3p;
    }

    count_ = 0;
    for (auto ent_ : ipsec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pair_wise_keying != nullptr)
    {
        _children["pair-wise-keying"] = pair_wise_keying;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::D3p()
{

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::~D3p()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::PairWiseKeying()
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Default()
    :
    passive{YType::empty, "passive"}
        ,
    client(std::make_shared<Native::Crypto::Gkm::Group::Default::Client>())
    , identity(nullptr) // presence node
    , server(std::make_shared<Native::Crypto::Gkm::Group::Default::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "default"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::~Default()
{
}

bool Native::Crypto::Gkm::Group::Default::has_data() const
{
    if (is_presence_container) return true;
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gkm::Group::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Default::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Default::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Default::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
        ,
    protocol(nullptr) // presence node
    , recovery_check(nullptr) // presence node
    , registration(std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Rekey>())
    , status(std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Status>())
{
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::has_data() const
{
    if (is_presence_container) return true;
    return bypass_policy.is_set
	|| transform_sets.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Default::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.yfilter)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        _children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets = value;
        transform_sets.value_namespace = name_space;
        transform_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Client::Protocol::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::RecoveryCheck()
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Default::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
    , hash(nullptr) // presence node
{

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        _children["hash"] = hash;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::Encryption()
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::Hash()
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::has_data() const
{
    if (is_presence_container) return true;
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_sa != nullptr)
    {
        _children["active-sa"] = active_sa;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::ActiveSa()
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Identity::Identity()
{

    yang_name = "identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gkm::Group::Default::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Default::Identity::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gkm::Group::Default::Identity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default::Server::Server()
    :
    local{YType::empty, "local"}
        ,
    address(std::make_shared<Native::Crypto::Gkm::Group::Default::Server::Address>())
    , hostname(std::make_shared<Native::Crypto::Gkm::Group::Default::Server::Hostname>())
{
    address->parent = this;
    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Default::Server::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gkm::Group::Default::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Default::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Default::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
}

void Native::Crypto::Gkm::Group::Default::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Default::Server::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gkm::Group::Default::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Default::Server::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Default::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gkm::Group::Default::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gkm::Group::Default::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gkm::Group::Default::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Identity::Identity()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
        ,
    default_(std::make_shared<Native::Crypto::Identity::Default>())
{
    default_->parent = this;

    yang_name = "identity"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Identity::~Identity()
{
}

bool Native::Crypto::Identity::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| dn.is_set
	|| fqdn.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:identity";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Identity::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "name" || name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Identity::Default::Default()
    :
    description{YType::empty, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
{

    yang_name = "default"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Identity::Default::~Default()
{
}

bool Native::Crypto::Identity::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| dn.is_set
	|| fqdn.is_set;
}

bool Native::Crypto::Identity::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter);
}

std::string Native::Crypto::Identity::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Identity::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Identity::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Identity::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Identity::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"},
    ipv4_deny{YType::enumeration, "ipv4-deny"},
    nat_transparency{YType::enumeration, "nat-transparency"}
        ,
    optional(nullptr) // presence node
    , profile(this, {"name"})
    , security_association(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>())
    , transform_set(this, {"tag"})
{
    security_association->parent = this;

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transform_set.len(); index++)
    {
        if(transform_set[index]->has_data())
            return true;
    }
    return df_bit.is_set
	|| fragmentation.is_set
	|| ipv4_deny.is_set
	|| nat_transparency.is_set
	|| (optional !=  nullptr && optional->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::Ipsec::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transform_set.len(); index++)
    {
        if(transform_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(ipv4_deny.yfilter)
	|| ydk::is_set(nat_transparency.yfilter)
	|| (optional !=  nullptr && optional->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (ipv4_deny.is_set || is_set(ipv4_deny.yfilter)) leaf_name_data.push_back(ipv4_deny.get_name_leafdata());
    if (nat_transparency.is_set || is_set(nat_transparency.yfilter)) leaf_name_data.push_back(nat_transparency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optional")
    {
        if(optional == nullptr)
        {
            optional = std::make_shared<Native::Crypto::Ipsec::Optional>();
        }
        return optional;
    }

    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ipsec::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "transform-set")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ipsec::TransformSet>();
        ent_->parent = this;
        transform_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(optional != nullptr)
    {
        _children["optional"] = optional;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(security_association != nullptr)
    {
        _children["security-association"] = security_association;
    }

    count_ = 0;
    for (auto ent_ : transform_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny = value;
        ipv4_deny.value_namespace = name_space;
        ipv4_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency = value;
        nat_transparency.value_namespace = name_space;
        nat_transparency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny.yfilter = yfilter;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optional" || name == "profile" || name == "security-association" || name == "transform-set" || name == "df-bit" || name == "fragmentation" || name == "ipv4-deny" || name == "nat-transparency")
        return true;
    return false;
}

Native::Crypto::Ipsec::Optional::Optional()
    :
    retry{YType::uint32, "retry"}
{

    yang_name = "optional"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Ipsec::Optional::~Optional()
{
}

bool Native::Crypto::Ipsec::Optional::has_data() const
{
    if (is_presence_container) return true;
    return retry.is_set;
}

bool Native::Crypto::Ipsec::Optional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Ipsec::Optional::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Optional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Optional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Optional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Optional::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Optional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Optional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Optional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    responder_only{YType::empty, "responder-only"}
        ,
    default_(std::make_shared<Native::Crypto::Ipsec::Profile::Default>())
    , dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>())
    , redundancy(std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>())
    , set(std::make_shared<Native::Crypto::Ipsec::Profile::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    redundancy->parent = this;
    set->parent = this;

    yang_name = "profile"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::Profile::~Profile()
{
}

bool Native::Crypto::Ipsec::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| responder_only.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::Profile::Default>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        _children["dialer"] = dialer;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "redundancy" || name == "set" || name == "name" || name == "description" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Default()
    :
    description{YType::empty, "description"},
    redundancy{YType::empty, "redundancy"},
    responder_only{YType::empty, "responder-only"}
        ,
    dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Dialer>())
    , set(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set>())
{
    dialer->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::~Default()
{
}

bool Native::Crypto::Ipsec::Profile::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| redundancy.is_set
	|| responder_only.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dialer != nullptr)
    {
        _children["dialer"] = dialer;
    }

    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "set" || name == "description" || name == "redundancy" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Dialer::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::empty, "transform-set"}
        ,
    pfs(nullptr) // presence node
    , reverse_route(nullptr) // presence node
    , security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation>())
    , security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy>())
{
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfs != nullptr)
    {
        _children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        _children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        _children["security-policy"] = security_policy;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ipsec::Profile::Default::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::Pfs::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
        ,
    dummy(nullptr) // presence node
    , idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer>())
    , lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime>())
    , replay(std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::has_data() const
{
    if (is_presence_container) return true;
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dummy != nullptr)
    {
        _children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        _children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    if (is_presence_container) return true;
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_data() const
{
    if (is_presence_container) return true;
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Redundancy::Redundancy()
    :
    name{YType::str, "name"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "redundancy"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stateful.is_set;
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "stateful")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"},
    mixed_mode{YType::empty, "mixed-mode"}
        ,
    peer(std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>())
    , pfs(nullptr) // presence node
    , reverse_route(std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>())
    , security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>())
    , security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;
    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Set::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        _children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        _children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        _children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        _children["security-policy"] = security_policy;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set" || name == "mixed-mode")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::Peer::~Peer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"},
    gateway{YType::str, "gateway"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| tag.is_set
	|| gateway.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(gateway.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag" || name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
        ,
    dummy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>())
    , idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>())
    , lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>())
    , replay(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_data() const
{
    if (is_presence_container) return true;
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dummy != nullptr)
    {
        _children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        _children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_data() const
{
    if (is_presence_container) return true;
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    if (is_presence_container) return true;
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "security-policy"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::SecurityAssociation()
    :
    ecn{YType::enumeration, "ecn"},
    idle_time{YType::uint32, "idle-time"}
        ,
    dummy(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>())
    , lifetime(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>())
    , replay(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_data() const
{
    if (is_presence_container) return true;
    return ecn.is_set
	|| idle_time.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dummy != nullptr)
    {
        _children["dummy"] = dummy;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    return _children;
}

void Native::Crypto::Ipsec::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "lifetime" || name == "replay" || name == "ecn" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_data() const
{
    if (is_presence_container) return true;
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::TransformSet()
    :
    tag{YType::str, "tag"},
    ah_hmac{YType::enumeration, "ah-hmac"},
    comp_lzs{YType::empty, "comp-lzs"},
    esp{YType::enumeration, "esp"},
    key_bit{YType::enumeration, "key-bit"},
    esp_hmac{YType::enumeration, "esp-hmac"}
        ,
    default_(std::make_shared<Native::Crypto::Ipsec::TransformSet::Default>())
    , mode(std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>())
{
    default_->parent = this;
    mode->parent = this;

    yang_name = "transform-set"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ipsec::TransformSet::~TransformSet()
{
}

bool Native::Crypto::Ipsec::TransformSet::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| ah_hmac.is_set
	|| comp_lzs.is_set
	|| esp.is_set
	|| key_bit.is_set
	|| esp_hmac.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(ah_hmac.yfilter)
	|| ydk::is_set(comp_lzs.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(key_bit.yfilter)
	|| ydk::is_set(esp_hmac.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ipsec::TransformSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transform-set";
    ADD_KEY_TOKEN(tag, "tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (ah_hmac.is_set || is_set(ah_hmac.yfilter)) leaf_name_data.push_back(ah_hmac.get_name_leafdata());
    if (comp_lzs.is_set || is_set(comp_lzs.yfilter)) leaf_name_data.push_back(comp_lzs.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (key_bit.is_set || is_set(key_bit.yfilter)) leaf_name_data.push_back(key_bit.get_name_leafdata());
    if (esp_hmac.is_set || is_set(esp_hmac.yfilter)) leaf_name_data.push_back(esp_hmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::TransformSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::TransformSet::Default>();
        }
        return default_;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::TransformSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Crypto::Ipsec::TransformSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac = value;
        ah_hmac.value_namespace = name_space;
        ah_hmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs = value;
        comp_lzs.value_namespace = name_space;
        comp_lzs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-bit")
    {
        key_bit = value;
        key_bit.value_namespace = name_space;
        key_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac = value;
        esp_hmac.value_namespace = name_space;
        esp_hmac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ah-hmac")
    {
        ah_hmac.yfilter = yfilter;
    }
    if(value_path == "comp-lzs")
    {
        comp_lzs.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "key-bit")
    {
        key_bit.yfilter = yfilter;
    }
    if(value_path == "esp-hmac")
    {
        esp_hmac.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "mode" || name == "tag" || name == "ah-hmac" || name == "comp-lzs" || name == "esp" || name == "key-bit" || name == "esp-hmac")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Default::Default()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "default"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::TransformSet::Default::~Default()
{
}

bool Native::Crypto::Ipsec::TransformSet::Default::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::TransformSet::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::TransformSet::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::TransformSet::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Mode()
    :
    tunnel{YType::empty, "tunnel"}
        ,
    transport(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "transform-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ipsec::TransformSet::Mode::~Mode()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::TransformSet::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Ipsec::TransformSet::Mode::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::TransformSet::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::Transport()
    :
    require{YType::empty, "require"}
{

    yang_name = "transport"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Ipsec::TransformSet::Mode::Transport::~Transport()
{
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_data() const
{
    if (is_presence_container) return true;
    return require.is_set;
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(require.yfilter);
}

std::string Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (require.is_set || is_set(require.yfilter)) leaf_name_data.push_back(require.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ipsec::TransformSet::Mode::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "require")
    {
        require = value;
        require.value_namespace = name_space;
        require.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::TransformSet::Mode::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "require")
    {
        require.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::TransformSet::Mode::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "require")
        return true;
    return false;
}

Native::Crypto::Key::Key()
    :
    storage{YType::str, "storage"}
        ,
    decrypt(std::make_shared<Native::Crypto::Key::Decrypt>())
    , encrypt(std::make_shared<Native::Crypto::Key::Encrypt>())
    , export_(std::make_shared<Native::Crypto::Key::Export>())
    , generate(std::make_shared<Native::Crypto::Key::Generate>())
    , import(std::make_shared<Native::Crypto::Key::Import>())
    , move(std::make_shared<Native::Crypto::Key::Move>())
    , pubkey_chain(std::make_shared<Native::Crypto::Key::PubkeyChain>())
    , zeroize(std::make_shared<Native::Crypto::Key::Zeroize>())
{
    decrypt->parent = this;
    encrypt->parent = this;
    export_->parent = this;
    generate->parent = this;
    import->parent = this;
    move->parent = this;
    pubkey_chain->parent = this;
    zeroize->parent = this;

    yang_name = "key"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::~Key()
{
}

bool Native::Crypto::Key::has_data() const
{
    if (is_presence_container) return true;
    return storage.is_set
	|| (decrypt !=  nullptr && decrypt->has_data())
	|| (encrypt !=  nullptr && encrypt->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (generate !=  nullptr && generate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (move !=  nullptr && move->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (zeroize !=  nullptr && zeroize->has_data());
}

bool Native::Crypto::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(storage.yfilter)
	|| (decrypt !=  nullptr && decrypt->has_operation())
	|| (encrypt !=  nullptr && encrypt->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (generate !=  nullptr && generate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (move !=  nullptr && move->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (zeroize !=  nullptr && zeroize->has_operation());
}

std::string Native::Crypto::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decrypt")
    {
        if(decrypt == nullptr)
        {
            decrypt = std::make_shared<Native::Crypto::Key::Decrypt>();
        }
        return decrypt;
    }

    if(child_yang_name == "encrypt")
    {
        if(encrypt == nullptr)
        {
            encrypt = std::make_shared<Native::Crypto::Key::Encrypt>();
        }
        return encrypt;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Crypto::Key::Export>();
        }
        return export_;
    }

    if(child_yang_name == "generate")
    {
        if(generate == nullptr)
        {
            generate = std::make_shared<Native::Crypto::Key::Generate>();
        }
        return generate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Crypto::Key::Import>();
        }
        return import;
    }

    if(child_yang_name == "move")
    {
        if(move == nullptr)
        {
            move = std::make_shared<Native::Crypto::Key::Move>();
        }
        return move;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Crypto::Key::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "zeroize")
    {
        if(zeroize == nullptr)
        {
            zeroize = std::make_shared<Native::Crypto::Key::Zeroize>();
        }
        return zeroize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(decrypt != nullptr)
    {
        _children["decrypt"] = decrypt;
    }

    if(encrypt != nullptr)
    {
        _children["encrypt"] = encrypt;
    }

    if(export_ != nullptr)
    {
        _children["export"] = export_;
    }

    if(generate != nullptr)
    {
        _children["generate"] = generate;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    if(move != nullptr)
    {
        _children["move"] = move;
    }

    if(pubkey_chain != nullptr)
    {
        _children["pubkey-chain"] = pubkey_chain;
    }

    if(zeroize != nullptr)
    {
        _children["zeroize"] = zeroize;
    }

    return _children;
}

void Native::Crypto::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt" || name == "encrypt" || name == "export" || name == "generate" || name == "import" || name == "move" || name == "pubkey-chain" || name == "zeroize" || name == "storage")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Decrypt()
    :
    ec(nullptr) // presence node
    , rsa(nullptr) // presence node
    , write(std::make_shared<Native::Crypto::Key::Decrypt::Write>())
{
    write->parent = this;

    yang_name = "decrypt"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Decrypt::~Decrypt()
{
}

bool Native::Crypto::Key::Decrypt::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (write !=  nullptr && write->has_data());
}

bool Native::Crypto::Key::Decrypt::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (write !=  nullptr && write->has_operation());
}

std::string Native::Crypto::Key::Decrypt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Decrypt::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Decrypt::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "write")
    {
        if(write == nullptr)
        {
            write = std::make_shared<Native::Crypto::Key::Decrypt::Write>();
        }
        return write;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    if(write != nullptr)
    {
        _children["write"] = write;
    }

    return _children;
}

void Native::Crypto::Key::Decrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Decrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Decrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa" || name == "write")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Decrypt::Ec::~Ec()
{
}

bool Native::Crypto::Key::Decrypt::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Decrypt::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Decrypt::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Decrypt::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Decrypt::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Write()
    :
    ec(nullptr) // presence node
    , rsa(nullptr) // presence node
{

    yang_name = "write"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Decrypt::Write::~Write()
{
}

bool Native::Crypto::Key::Decrypt::Write::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Decrypt::Write::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Decrypt::Write::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::Write::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Decrypt::Write::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Decrypt::Write::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::Write::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Decrypt::Write::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Decrypt::Write::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Decrypt::Write::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Decrypt::Write::Ec::~Ec()
{
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Write::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::Write::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::Write::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Decrypt::Write::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Write::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Decrypt::Write::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Write::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Decrypt::Write::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Decrypt::Write::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Decrypt::Write::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Write::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Encrypt()
    :
    ec(nullptr) // presence node
    , rsa(nullptr) // presence node
    , write(std::make_shared<Native::Crypto::Key::Encrypt::Write>())
{
    write->parent = this;

    yang_name = "encrypt"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Encrypt::~Encrypt()
{
}

bool Native::Crypto::Key::Encrypt::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (write !=  nullptr && write->has_data());
}

bool Native::Crypto::Key::Encrypt::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (write !=  nullptr && write->has_operation());
}

std::string Native::Crypto::Key::Encrypt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Encrypt::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Encrypt::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "write")
    {
        if(write == nullptr)
        {
            write = std::make_shared<Native::Crypto::Key::Encrypt::Write>();
        }
        return write;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    if(write != nullptr)
    {
        _children["write"] = write;
    }

    return _children;
}

void Native::Crypto::Key::Encrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Encrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Encrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa" || name == "write")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Ec::~Ec()
{
}

bool Native::Crypto::Key::Encrypt::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Encrypt::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Write()
    :
    ec(nullptr) // presence node
    , rsa(nullptr) // presence node
{

    yang_name = "write"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Encrypt::Write::~Write()
{
}

bool Native::Crypto::Key::Encrypt::Write::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Encrypt::Write::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Encrypt::Write::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Write::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Encrypt::Write::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Encrypt::Write::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Write::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Encrypt::Write::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Encrypt::Write::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Encrypt::Write::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Write::Ec::~Ec()
{
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Write::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Write::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Write::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Write::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Write::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Export::Export()
    :
    ec(this, {"label"})
    , rsa(this, {"label"})
{

    yang_name = "export"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::~Export()
{
}

bool Native::Crypto::Key::Export::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Export::has_operation() const
{
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Export::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Export::Ec>();
        ent_->parent = this;
        ec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsa")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Export::Rsa>();
        ent_->parent = this;
        rsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Ec()
    :
    label{YType::str, "label"}
        ,
    pem(std::make_shared<Native::Crypto::Key::Export::Ec::Pem>())
{
    pem->parent = this;

    yang_name = "ec"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::Ec::~Ec()
{
}

bool Native::Crypto::Key::Export::Ec::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Ec::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pem != nullptr)
    {
        _children["pem"] = pem;
    }

    return _children;
}

void Native::Crypto::Key::Export::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>())
    , url(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_data() const
{
    if (is_presence_container) return true;
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Ec::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(terminal != nullptr)
    {
        _children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Ec::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_data() const
{
    if (is_presence_container) return true;
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Url::Url()
    :
    file{YType::str, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Rsa()
    :
    label{YType::str, "label"}
        ,
    pem(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>())
{
    pem->parent = this;

    yang_name = "rsa"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Export::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pem != nullptr)
    {
        _children["pem"] = pem;
    }

    return _children;
}

void Native::Crypto::Key::Export::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>())
    , url(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_data() const
{
    if (is_presence_container) return true;
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(terminal != nullptr)
    {
        _children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Rsa::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_data() const
{
    if (is_presence_container) return true;
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Url::Url()
    :
    file{YType::str, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Generate()
    :
    ec(std::make_shared<Native::Crypto::Key::Generate::Ec>())
    , rsa(nullptr) // presence node
{
    ec->parent = this;

    yang_name = "generate"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Generate::~Generate()
{
}

bool Native::Crypto::Key::Generate::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Generate::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Generate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Generate::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Generate::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Generate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Generate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Generate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Ec::Ec()
    :
    keysize{YType::enumeration, "keysize"},
    exportable{YType::empty, "exportable"},
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Generate::Ec::~Ec()
{
}

bool Native::Crypto::Key::Generate::Ec::has_data() const
{
    if (is_presence_container) return true;
    return keysize.is_set
	|| exportable.is_set
	|| label.is_set;
}

bool Native::Crypto::Key::Generate::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Generate::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Generate::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keysize" || name == "exportable" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Rsa::Rsa()
    :
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_keys{YType::empty, "general-keys"},
    label{YType::str, "label"},
    modulus{YType::uint16, "modulus"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    usage_keys{YType::empty, "usage-keys"}
{

    yang_name = "rsa"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Generate::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Generate::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| exportable.is_set
	|| general_keys.is_set
	|| label.is_set
	|| modulus.is_set
	|| on.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| usage_keys.is_set;
}

bool Native::Crypto::Key::Generate::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_keys.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(modulus.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(usage_keys.yfilter);
}

std::string Native::Crypto::Key::Generate::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_keys.is_set || is_set(general_keys.yfilter)) leaf_name_data.push_back(general_keys.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (modulus.is_set || is_set(modulus.yfilter)) leaf_name_data.push_back(modulus.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Generate::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-keys")
    {
        general_keys = value;
        general_keys.value_namespace = name_space;
        general_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulus")
    {
        modulus = value;
        modulus.value_namespace = name_space;
        modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-keys")
    {
        general_keys.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "modulus")
    {
        modulus.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "exportable" || name == "general-keys" || name == "label" || name == "modulus" || name == "on" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Key::Import::Import()
    :
    ec(this, {"name"})
    , rsa(this, {"label"})
{

    yang_name = "import"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::~Import()
{
}

bool Native::Crypto::Key::Import::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Import::has_operation() const
{
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Import::Ec>();
        ent_->parent = this;
        ec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsa")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Import::Rsa>();
        ent_->parent = this;
        rsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Ec()
    :
    name{YType::str, "name"},
    exportable{YType::empty, "exportable"},
    terminal{YType::str, "terminal"}
        ,
    url(std::make_shared<Native::Crypto::Key::Import::Ec::Url>())
{
    url->parent = this;

    yang_name = "ec"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::Ec::~Ec()
{
}

bool Native::Crypto::Key::Import::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| exportable.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Ec::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Import::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "name" || name == "exportable" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Url::Url()
    :
    file{YType::str, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Import::Ec::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Ec::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Ec::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Ec::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Ec::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Ec::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Import::Ec::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
}

Native::Crypto::Key::Import::Rsa::Rsa()
    :
    label{YType::str, "label"},
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_purpose{YType::empty, "general-purpose"},
    on{YType::str, "on"},
    pem{YType::empty, "pem"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    usage_keys{YType::empty, "usage-keys"},
    terminal{YType::str, "terminal"}
        ,
    url(std::make_shared<Native::Crypto::Key::Import::Rsa::Url>())
{
    url->parent = this;

    yang_name = "rsa"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Import::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| encryption.is_set
	|| exportable.is_set
	|| general_purpose.is_set
	|| on.is_set
	|| pem.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| usage_keys.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_purpose.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(pem.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(usage_keys.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_purpose.is_set || is_set(general_purpose.yfilter)) leaf_name_data.push_back(general_purpose.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Rsa::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Import::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-purpose")
    {
        general_purpose = value;
        general_purpose.value_namespace = name_space;
        general_purpose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-purpose")
    {
        general_purpose.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "label" || name == "encryption" || name == "exportable" || name == "general-purpose" || name == "on" || name == "pem" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Key::Import::Rsa::Url::Url()
    :
    file{YType::str, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Import::Rsa::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Rsa::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Rsa::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Rsa::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Rsa::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Rsa::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Import::Rsa::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
}

Native::Crypto::Key::Move::Move()
    :
    rsa(std::make_shared<Native::Crypto::Key::Move::Rsa>())
{
    rsa->parent = this;

    yang_name = "move"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Move::~Move()
{
}

bool Native::Crypto::Key::Move::has_data() const
{
    if (is_presence_container) return true;
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Move::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Move::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Move::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Move::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Move::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Move::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Move::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Move::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Move::Rsa::Rsa()
    :
    label{YType::str, "label"},
    non_exportable{YType::empty, "non-exportable"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    storage{YType::str, "storage"}
{

    yang_name = "rsa"; yang_parent_name = "move"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Move::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Move::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| non_exportable.is_set
	|| on.is_set
	|| redundancy.is_set
	|| storage.is_set;
}

bool Native::Crypto::Key::Move::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(non_exportable.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(storage.yfilter);
}

std::string Native::Crypto::Key::Move::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/move/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (non_exportable.is_set || is_set(non_exportable.yfilter)) leaf_name_data.push_back(non_exportable.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Move::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Move::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Move::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exportable")
    {
        non_exportable = value;
        non_exportable.value_namespace = name_space;
        non_exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Move::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "non-exportable")
    {
        non_exportable.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Move::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "non-exportable" || name == "on" || name == "redundancy" || name == "storage")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::PubkeyChain()
    :
    rsa(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>())
{
    rsa->parent = this;

    yang_name = "pubkey-chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Rsa()
    :
    addressed_key(this, {"ip"})
    , named_key(this, {"name"})
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>())
{
    default_->parent = this;

    yang_name = "rsa"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey>();
        ent_->parent = this;
        addressed_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "named-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey>();
        ent_->parent = this;
        named_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addressed_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : named_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key" || name == "default")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
        ,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>())
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "addressed-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "ip" || name == "use" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
        ,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
        ,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>())
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "named-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "name" || name == "use" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
        ,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::Default()
    :
    addressed_key(this, {"ip"})
    , named_key(this, {"name"})
{

    yang_name = "default"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey>();
        ent_->parent = this;
        addressed_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "named-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey>();
        ent_->parent = this;
        named_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addressed_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : named_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{

    yang_name = "addressed-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{

    yang_name = "named-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Zeroize()
    :
    ec(nullptr) // presence node
    , pubkey_chain(nullptr) // presence node
    , rsa(nullptr) // presence node
{

    yang_name = "zeroize"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Zeroize::~Zeroize()
{
}

bool Native::Crypto::Key::Zeroize::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Zeroize::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Zeroize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zeroize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Zeroize::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Crypto::Key::Zeroize::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Zeroize::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(pubkey_chain != nullptr)
    {
        _children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Zeroize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Zeroize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Zeroize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "pubkey-chain" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Ec::Ec()
    :
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::Ec::~Ec()
{
}

bool Native::Crypto::Key::Zeroize::Ec::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Zeroize::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::PubkeyChain::PubkeyChain()
    :
    index_{YType::uint16, "index"}
{

    yang_name = "pubkey-chain"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Rsa::Rsa()
    :
    label{YType::str, "label"}
{

    yang_name = "rsa"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Zeroize::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Zeroize::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Keyring::Keyring()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    default_(std::make_shared<Native::Crypto::Keyring::Default>())
    , local_address(std::make_shared<Native::Crypto::Keyring::LocalAddress>())
    , pre_shared_key(std::make_shared<Native::Crypto::Keyring::PreSharedKey>())
    , rsa_pubkey(std::make_shared<Native::Crypto::Keyring::RsaPubkey>())
{
    default_->parent = this;
    local_address->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "keyring"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Keyring::~Keyring()
{
}

bool Native::Crypto::Keyring::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:keyring";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Keyring::Default>();
        }
        return default_;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Keyring::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        _children["rsa-pubkey"] = rsa_pubkey;
    }

    return _children;
}

void Native::Crypto::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local-address" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "name" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::Default()
    :
    description{YType::str, "description"}
        ,
    local_address(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress>())
    , pre_shared_key(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>())
    , rsa_pubkey(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>())
{
    local_address->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "default"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::~Default()
{
}

bool Native::Crypto::Keyring::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        _children["rsa-pubkey"] = rsa_pubkey;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "description")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::LocalAddress()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    bind_ip_address(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress>())
    , atm_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface>())
{
    bind_ip_address->parent = this;
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "local-address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::~LocalAddress()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Crypto::Keyring::Default::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Crypto::Keyring::Default::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-ip-address")
    {
        if(bind_ip_address == nullptr)
        {
            bind_ip_address = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress>();
        }
        return bind_ip_address;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bind_ip_address != nullptr)
    {
        _children["bind-ip-address"] = bind_ip_address;
    }

    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-ip-address" || name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::BindIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bind-ip-address"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::~BindIpAddress()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>())
    , hostname(this, {"name"})
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Address()
    :
    ipv4(this, {"ipv4_addr"})
    , ipv6(this, {"ipv6_addr"})
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6_addr{YType::str, "ipv6-addr"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6_addr, "ipv6-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>())
    , hostname(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_data() const
{
    if (is_presence_container) return true;
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::LocalAddress()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    bind_ip_address(std::make_shared<Native::Crypto::Keyring::LocalAddress::BindIpAddress>())
    , atm_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface>())
{
    bind_ip_address->parent = this;
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "local-address"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::~LocalAddress()
{
}

bool Native::Crypto::Keyring::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Crypto::Keyring::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Crypto::Keyring::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-ip-address")
    {
        if(bind_ip_address == nullptr)
        {
            bind_ip_address = std::make_shared<Native::Crypto::Keyring::LocalAddress::BindIpAddress>();
        }
        return bind_ip_address;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bind_ip_address != nullptr)
    {
        _children["bind-ip-address"] = bind_ip_address;
    }

    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Crypto::Keyring::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-ip-address" || name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::BindIpAddress::BindIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bind-ip-address"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::BindIpAddress::~BindIpAddress()
{
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::BindIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::BindIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>())
    , hostname(this, {"name"})
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Address()
    :
    ipv4(this, {"ipv4_addr"})
    , ipv6(this, {"ipv6_addr"})
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6_addr{YType::str, "ipv6-addr"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6_addr, "ipv6-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>())
    , hostname(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_data() const
{
    if (is_presence_container) return true;
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
}

void Native::Crypto::Keyring::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Isakmp::Isakmp()
    :
    aggressive_mode{YType::enumeration, "aggressive-mode"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    enable{YType::empty, "enable"},
    fragmentation{YType::empty, "fragmentation"},
    identity{YType::enumeration, "identity"},
    invalid_spi_recovery{YType::empty, "invalid-spi-recovery"}
        ,
    client(std::make_shared<Native::Crypto::Isakmp::Client>())
    , default_(std::make_shared<Native::Crypto::Isakmp::Default>())
    , keepalive(std::make_shared<Native::Crypto::Isakmp::Keepalive>())
    , key(std::make_shared<Native::Crypto::Isakmp::Key>())
    , nat(std::make_shared<Native::Crypto::Isakmp::Nat>())
    , peer(std::make_shared<Native::Crypto::Isakmp::Peer>())
    , policy(this, {"number"})
    , profile(this, {"name"})
    , xauth(std::make_shared<Native::Crypto::Isakmp::Xauth>())
{
    client->parent = this;
    default_->parent = this;
    keepalive->parent = this;
    key->parent = this;
    nat->parent = this;
    peer->parent = this;
    xauth->parent = this;

    yang_name = "isakmp"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::~Isakmp()
{
}

bool Native::Crypto::Isakmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return aggressive_mode.is_set
	|| disconnect_revoked_peers.is_set
	|| enable.is_set
	|| fragmentation.is_set
	|| identity.is_set
	|| invalid_spi_recovery.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (xauth !=  nullptr && xauth->has_data());
}

bool Native::Crypto::Isakmp::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggressive_mode.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(invalid_spi_recovery.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (xauth !=  nullptr && xauth->has_operation());
}

std::string Native::Crypto::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive_mode.is_set || is_set(aggressive_mode.yfilter)) leaf_name_data.push_back(aggressive_mode.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (invalid_spi_recovery.is_set || is_set(invalid_spi_recovery.yfilter)) leaf_name_data.push_back(invalid_spi_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Default>();
        }
        return default_;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Key>();
        }
        return key;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Isakmp::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Isakmp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    if(child_yang_name == "xauth")
    {
        if(xauth == nullptr)
        {
            xauth = std::make_shared<Native::Crypto::Isakmp::Xauth>();
        }
        return xauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(nat != nullptr)
    {
        _children["nat"] = nat;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(xauth != nullptr)
    {
        _children["xauth"] = xauth;
    }

    return _children;
}

void Native::Crypto::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode = value;
        aggressive_mode.value_namespace = name_space;
        aggressive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery = value;
        invalid_spi_recovery.value_namespace = name_space;
        invalid_spi_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "default" || name == "keepalive" || name == "key" || name == "nat" || name == "peer" || name == "policy" || name == "profile" || name == "xauth" || name == "aggressive-mode" || name == "disconnect-revoked-peers" || name == "enable" || name == "fragmentation" || name == "identity" || name == "invalid-spi-recovery")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Client()
    :
    configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration>())
    , firewall(this, {"policy_name"})
{
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<firewall.len(); index++)
    {
        if(firewall[index]->has_data())
            return true;
    }
    return (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::Isakmp::Client::has_operation() const
{
    for (std::size_t index=0; index<firewall.len(); index++)
    {
        if(firewall[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::Isakmp::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "firewall")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Client::Firewall>();
        ent_->parent = this;
        firewall.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    count_ = 0;
    for (auto ent_ : firewall.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "firewall")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Configuration()
    :
    browser_proxy{YType::str, "browser-proxy"}
        ,
    address_pool(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>())
    , group(this, {"name"})
{
    address_pool->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return browser_proxy.is_set
	|| (address_pool !=  nullptr && address_pool->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| (address_pool !=  nullptr && address_pool->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-pool")
    {
        if(address_pool == nullptr)
        {
            address_pool = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>();
        }
        return address_pool;
    }

    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_pool != nullptr)
    {
        _children["address-pool"] = address_pool;
    }

    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-pool" || name == "group" || name == "browser-proxy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::AddressPool()
    :
    local{YType::str, "local"}
{

    yang_name = "address-pool"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::~AddressPool()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Group()
    :
    name{YType::str, "name"},
    access_restrict{YType::str, "access-restrict"},
    acl{YType::str, "acl"},
    backup_gateway{YType::str, "backup-gateway"},
    browser_proxy{YType::str, "browser-proxy"},
    domain{YType::str, "domain"},
    group_lock{YType::empty, "group-lock"},
    include_local_lan{YType::empty, "include-local-lan"},
    max_logins{YType::uint8, "max-logins"},
    max_users{YType::uint32, "max-users"},
    netmask{YType::str, "netmask"},
    pfs{YType::empty, "pfs"},
    pool{YType::str, "pool"},
    save_password{YType::empty, "save-password"},
    smartcard_removal_disconnect{YType::empty, "smartcard-removal-disconnect"},
    split_dns{YType::str, "split-dns"}
        ,
    auto_update(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>())
    , crypto(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>())
    , dhcp(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>())
    , dns(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>())
    , firewall(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>())
    , key(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>())
    , wins(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>())
{
    auto_update->parent = this;
    configuration->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    dns->parent = this;
    firewall->parent = this;
    key->parent = this;
    wins->parent = this;

    yang_name = "group"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::~Group()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| access_restrict.is_set
	|| acl.is_set
	|| backup_gateway.is_set
	|| browser_proxy.is_set
	|| domain.is_set
	|| group_lock.is_set
	|| include_local_lan.is_set
	|| max_logins.is_set
	|| max_users.is_set
	|| netmask.is_set
	|| pfs.is_set
	|| pool.is_set
	|| save_password.is_set
	|| smartcard_removal_disconnect.is_set
	|| split_dns.is_set
	|| (auto_update !=  nullptr && auto_update->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (wins !=  nullptr && wins->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_restrict.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(backup_gateway.yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(group_lock.yfilter)
	|| ydk::is_set(include_local_lan.yfilter)
	|| ydk::is_set(max_logins.yfilter)
	|| ydk::is_set(max_users.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(pfs.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(save_password.yfilter)
	|| ydk::is_set(smartcard_removal_disconnect.yfilter)
	|| ydk::is_set(split_dns.yfilter)
	|| (auto_update !=  nullptr && auto_update->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (wins !=  nullptr && wins->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_restrict.is_set || is_set(access_restrict.yfilter)) leaf_name_data.push_back(access_restrict.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (backup_gateway.is_set || is_set(backup_gateway.yfilter)) leaf_name_data.push_back(backup_gateway.get_name_leafdata());
    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (group_lock.is_set || is_set(group_lock.yfilter)) leaf_name_data.push_back(group_lock.get_name_leafdata());
    if (include_local_lan.is_set || is_set(include_local_lan.yfilter)) leaf_name_data.push_back(include_local_lan.get_name_leafdata());
    if (max_logins.is_set || is_set(max_logins.yfilter)) leaf_name_data.push_back(max_logins.get_name_leafdata());
    if (max_users.is_set || is_set(max_users.yfilter)) leaf_name_data.push_back(max_users.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (pfs.is_set || is_set(pfs.yfilter)) leaf_name_data.push_back(pfs.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (save_password.is_set || is_set(save_password.yfilter)) leaf_name_data.push_back(save_password.get_name_leafdata());
    if (smartcard_removal_disconnect.is_set || is_set(smartcard_removal_disconnect.yfilter)) leaf_name_data.push_back(smartcard_removal_disconnect.get_name_leafdata());
    if (split_dns.is_set || is_set(split_dns.yfilter)) leaf_name_data.push_back(split_dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-update")
    {
        if(auto_update == nullptr)
        {
            auto_update = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>();
        }
        return auto_update;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>();
        }
        return configuration;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>();
        }
        return crypto;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>();
        }
        return key;
    }

    if(child_yang_name == "wins")
    {
        if(wins == nullptr)
        {
            wins = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>();
        }
        return wins;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_update != nullptr)
    {
        _children["auto-update"] = auto_update;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(crypto != nullptr)
    {
        _children["crypto"] = crypto;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(firewall != nullptr)
    {
        _children["firewall"] = firewall;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(wins != nullptr)
    {
        _children["wins"] = wins;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-restrict")
    {
        access_restrict = value;
        access_restrict.value_namespace = name_space;
        access_restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway = value;
        backup_gateway.value_namespace = name_space;
        backup_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-lock")
    {
        group_lock = value;
        group_lock.value_namespace = name_space;
        group_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan = value;
        include_local_lan.value_namespace = name_space;
        include_local_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-logins")
    {
        max_logins = value;
        max_logins.value_namespace = name_space;
        max_logins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-users")
    {
        max_users = value;
        max_users.value_namespace = name_space;
        max_users.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfs")
    {
        pfs = value;
        pfs.value_namespace = name_space;
        pfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "save-password")
    {
        save_password = value;
        save_password.value_namespace = name_space;
        save_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect = value;
        smartcard_removal_disconnect.value_namespace = name_space;
        smartcard_removal_disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-dns")
    {
        split_dns = value;
        split_dns.value_namespace = name_space;
        split_dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-restrict")
    {
        access_restrict.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway.yfilter = yfilter;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "group-lock")
    {
        group_lock.yfilter = yfilter;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan.yfilter = yfilter;
    }
    if(value_path == "max-logins")
    {
        max_logins.yfilter = yfilter;
    }
    if(value_path == "max-users")
    {
        max_users.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "pfs")
    {
        pfs.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "save-password")
    {
        save_password.yfilter = yfilter;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect.yfilter = yfilter;
    }
    if(value_path == "split-dns")
    {
        split_dns.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-update" || name == "configuration" || name == "crypto" || name == "dhcp" || name == "dns" || name == "firewall" || name == "key" || name == "wins" || name == "name" || name == "access-restrict" || name == "acl" || name == "backup-gateway" || name == "browser-proxy" || name == "domain" || name == "group-lock" || name == "include-local-lan" || name == "max-logins" || name == "max-users" || name == "netmask" || name == "pfs" || name == "pool" || name == "save-password" || name == "smartcard-removal-disconnect" || name == "split-dns")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::AutoUpdate()
    :
    client{YType::str, "client"},
    url{YType::str, "url"},
    rev{YType::str, "rev"}
{

    yang_name = "auto-update"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::~AutoUpdate()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set
	|| url.is_set
	|| rev.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(rev.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "url" || name == "rev")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Configuration_()
    :
    url{YType::str, "url"},
    version{YType::uint32, "version"}
{

    yang_name = "configuration"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::~Configuration_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| version.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "version")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Crypto_()
    :
    aaa(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>())
{
    aaa->parent = this;

    yang_name = "crypto"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::~Crypto_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_data() const
{
    if (is_presence_container) return true;
    return (aaa !=  nullptr && aaa->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_operation() const
{
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Aaa()
    :
    attribute(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>())
{
    attribute->parent = this;

    yang_name = "aaa"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::~Aaa()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::Attribute()
    :
    list{YType::str, "list"}
{

    yang_name = "attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::~Attribute()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::Dhcp()
    :
    giaddr{YType::str, "giaddr"},
    server{YType::str, "server"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "dhcp"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::~Dhcp()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return giaddr.is_set
	|| server.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(giaddr.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (giaddr.is_set || is_set(giaddr.yfilter)) leaf_name_data.push_back(giaddr.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "giaddr")
    {
        giaddr = value;
        giaddr.value_namespace = name_space;
        giaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "giaddr")
    {
        giaddr.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "giaddr" || name == "server" || name == "timeout")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Gkm::Group::Default::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Default::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::drop {1, "drop"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::jump {2, "jump"};

const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::spi_matching {0, "spi-matching"};
const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::udp_encapsulation {1, "udp-encapsulation"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_md5_hmac {0, "ah-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha_hmac {1, "ah-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha256_hmac {2, "ah-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha384_hmac {3, "ah-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::AhHmac::ah_sha512_hmac {4, "ah-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_3des {0, "esp-3des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_aes {1, "esp-aes"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_des {2, "esp-des"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gcm {3, "esp-gcm"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_gmac {4, "esp-gmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_null {5, "esp-null"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::Esp::esp_seal {6, "esp-seal"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::KeyBit::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_md5_hmac {0, "esp-md5-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha_hmac {1, "esp-sha-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha256_hmac {2, "esp-sha256-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha384_hmac {3, "esp-sha384-hmac"};
const Enum::YLeaf Native::Crypto::Ipsec::TransformSet::EspHmac::esp_sha512_hmac {4, "esp-sha512-hmac"};

const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_256 {0, "256"};
const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_384 {1, "384"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Isakmp::AggressiveMode::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Isakmp::Identity::address {0, "address"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::dn {1, "dn"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::hostname {2, "hostname"};


}
}

