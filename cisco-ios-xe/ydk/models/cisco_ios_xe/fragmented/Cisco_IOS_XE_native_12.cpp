
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_13.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ipv6::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ipv6::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::~Spd()
{
}

bool Native::Ipv6::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ipv6::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ipv6::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ipv6::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ipv6::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ipv6::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::Queue::~Queue()
{
}

bool Native::Ipv6::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ipv6::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ipv6::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Ipv6::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{

    yang_name = "prefix-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ipv6::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Native::Ipv6::PrefixList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "sequence-number")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>())
	,deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>())
{
    permit->parent = this;
    deny->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ipv6::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "seq")
    {
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    count = 0;
    for (auto const & c : seq)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Ipv6::PrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny" || name == "seq" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Permit::Permit()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "permit"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Deny::Deny()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "deny"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ip{YType::str, "ip"},
    ge{YType::uint16, "ge"},
    le{YType::uint16, "le"}
{

    yang_name = "deny"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ip{YType::str, "ip"},
    ge{YType::uint16, "ge"},
    le{YType::uint16, "le"}
{

    yang_name = "permit"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    interface{YType::str, "interface"},
    hardware_address{YType::str, "hardware-address"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Ipv6::Neighbor::has_data() const
{
    return address.is_set
	|| interface.is_set
	|| hardware_address.is_set;
}

bool Native::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(hardware_address.yfilter);
}

std::string Native::Ipv6::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
}

bool Native::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface" || name == "hardware-address")
        return true;
    return false;
}

Native::Ipv6::Mld::Mld()
    :
    ssm_map(std::make_shared<Native::Ipv6::Mld::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "mld"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::~Mld()
{
}

bool Native::Ipv6::Mld::has_data() const
{
    return (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ipv6::Mld::has_operation() const
{
    return is_set(yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ipv6::Mld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mld:mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ipv6::Mld::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ipv6::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ipv6::Mld::SsmMap::Query>())
	,static_(std::make_shared<Native::Ipv6::Mld::SsmMap::Static>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::~SsmMap()
{
}

bool Native::Ipv6::Mld::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ipv6::Mld::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ipv6::Mld::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ipv6::Mld::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Mld::SsmMap::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ipv6::Mld::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Query::~Query()
{
}

bool Native::Ipv6::Mld::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Mld::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Static::Static()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Static::~Static()
{
}

bool Native::Ipv6::Mld::SsmMap::Static::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Mld::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ipv6::MulticastRouting::MulticastRouting()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ipv6::MulticastRouting::has_data() const
{
    return vrf.is_set;
}

bool Native::Ipv6::MulticastRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ipv6::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ipv6::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Rip::Rip()
    :
    vrf_mode{YType::enumeration, "vrf-mode"}
{

    yang_name = "rip"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Rip::~Rip()
{
}

bool Native::Ipv6::Rip::has_data() const
{
    return vrf_mode.is_set;
}

bool Native::Ipv6::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_mode.yfilter);
}

std::string Native::Ipv6::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_mode.is_set || is_set(vrf_mode.yfilter)) leaf_name_data.push_back(vrf_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-mode")
    {
        vrf_mode = value;
        vrf_mode.value_namespace = name_space;
        vrf_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-mode")
    {
        vrf_mode.yfilter = yfilter;
    }
}

bool Native::Ipv6::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-mode")
        return true;
    return false;
}

Native::Vlan::Vlan()
    :
    accounting(nullptr) // presence node
	,internal(std::make_shared<Native::Vlan::Internal>())
	,dot1q(std::make_shared<Native::Vlan::Dot1Q>())
	,access_log(std::make_shared<Native::Vlan::AccessLog>())
{
    internal->parent = this;
    dot1q->parent = this;
    access_log->parent = this;

    yang_name = "vlan"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::~Vlan()
{
}

bool Native::Vlan::has_data() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return (accounting !=  nullptr && accounting->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (access_log !=  nullptr && access_log->has_data());
}

bool Native::Vlan::has_operation() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (access_log !=  nullptr && access_log->has_operation());
}

std::string Native::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-vlan:access-map")
    {
        auto c = std::make_shared<Native::Vlan::AccessMap>();
        c->parent = this;
        access_map.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:configuration")
    {
        auto c = std::make_shared<Native::Vlan::Configuration>();
        c->parent = this;
        configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:filter")
    {
        auto c = std::make_shared<Native::Vlan::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Vlan::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Vlan::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Vlan::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:access-log")
    {
        if(access_log == nullptr)
        {
            access_log = std::make_shared<Native::Vlan::AccessLog>();
        }
        return access_log;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:vlan-list")
    {
        auto c = std::make_shared<Native::Vlan::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accounting != nullptr)
    {
        children["Cisco-IOS-XE-vlan:accounting"] = accounting;
    }

    if(internal != nullptr)
    {
        children["Cisco-IOS-XE-vlan:internal"] = internal;
    }

    if(dot1q != nullptr)
    {
        children["Cisco-IOS-XE-vlan:dot1q"] = dot1q;
    }

    if(access_log != nullptr)
    {
        children["Cisco-IOS-XE-vlan:access-log"] = access_log;
    }

    count = 0;
    for (auto const & c : vlan_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-map" || name == "configuration" || name == "filter" || name == "accounting" || name == "internal" || name == "dot1q" || name == "access-log" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::AccessMap::AccessMap()
    :
    name{YType::str, "name"},
    value_{YType::uint16, "value"},
    action{YType::enumeration, "action"}
    	,
    match(std::make_shared<Native::Vlan::AccessMap::Match>())
{
    match->parent = this;

    yang_name = "access-map"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessMap::~AccessMap()
{
}

bool Native::Vlan::AccessMap::has_data() const
{
    return name.is_set
	|| value_.is_set
	|| action.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Vlan::AccessMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(action.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Vlan::AccessMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Vlan::AccessMap::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Vlan::AccessMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "value" || name == "action")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Match()
    :
    ipv6(std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>())
	,ip(std::make_shared<Native::Vlan::AccessMap::Match::Ip>())
{
    ipv6->parent = this;
    ip->parent = this;

    yang_name = "match"; yang_parent_name = "access-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::~Match()
{
}

bool Native::Vlan::AccessMap::Match::has_data() const
{
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Vlan::AccessMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Vlan::AccessMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::AccessMap::Match::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Vlan::AccessMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::AccessMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::AccessMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ip")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ipv6::~Ipv6()
{
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessMap::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ip::~Ip()
{
}

bool Native::Vlan::AccessMap::Match::Ip::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ip::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::Configuration::Configuration()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    ip(std::make_shared<Native::Vlan::Configuration::Ip>())
	,ipv6(std::make_shared<Native::Vlan::Configuration::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "configuration"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Configuration::~Configuration()
{
}

bool Native::Vlan::Configuration::has_data() const
{
    return vlan_id.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vlan::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vlan::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:configuration" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::Configuration::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::Configuration::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vlan::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "vlan-id")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Ip()
    :
    flow(std::make_shared<Native::Vlan::Configuration::Ip::Flow>())
{
    flow->parent = this;

    yang_name = "ip"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::~Ip()
{
}

bool Native::Vlan::Configuration::Ip::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Vlan::Configuration::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Vlan::Configuration::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Vlan::Configuration::Ip::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Flow()
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::~Flow()
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vlan::Configuration::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto c = std::make_shared<Native::Vlan::Configuration::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : monitor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::Monitor()
    :
    flow_monitor{YType::str, "flow-monitor"},
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_data() const
{
    return flow_monitor.is_set
	|| input.is_set
	|| output.is_set;
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_monitor.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[flow-monitor='" <<flow_monitor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_monitor.is_set || is_set(flow_monitor.yfilter)) leaf_name_data.push_back(flow_monitor.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor = value;
        flow_monitor.value_namespace = name_space;
        flow_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Ipv6()
    :
    dhcp(std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::~Ipv6()
{
}

bool Native::Vlan::Configuration::Ipv6::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Vlan::Configuration::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Filter::Filter()
    :
    word{YType::str, "word"},
    vlan_list{YType::str, "vlan-list"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Filter::~Filter()
{
}

bool Native::Vlan::Filter::has_data() const
{
    return word.is_set
	|| vlan_list.is_set;
}

bool Native::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan_list.yfilter);
}

std::string Native::Vlan::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:filter" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
}

bool Native::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::Accounting::Accounting()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "accounting"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Accounting::~Accounting()
{
}

bool Native::Vlan::Accounting::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Vlan::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Internal::Internal()
    :
    allocation(std::make_shared<Native::Vlan::Internal::Allocation>())
{
    allocation->parent = this;

    yang_name = "internal"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::~Internal()
{
}

bool Native::Vlan::Internal::has_data() const
{
    return (allocation !=  nullptr && allocation->has_data());
}

bool Native::Vlan::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Native::Vlan::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Native::Vlan::Internal::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allocation != nullptr)
    {
        children["allocation"] = allocation;
    }

    return children;
}

void Native::Vlan::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Native::Vlan::Internal::Allocation::Allocation()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "allocation"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::Allocation::~Allocation()
{
}

bool Native::Vlan::Internal::Allocation::has_data() const
{
    return policy.is_set;
}

bool Native::Vlan::Internal::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Vlan::Internal::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:internal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Internal::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Internal::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Internal::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Dot1Q()
    :
    tag(std::make_shared<Native::Vlan::Dot1Q::Tag>())
{
    tag->parent = this;

    yang_name = "dot1q"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::~Dot1Q()
{
}

bool Native::Vlan::Dot1Q::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Vlan::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Vlan::Dot1Q::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Vlan::Dot1Q::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Vlan::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Tag::Tag()
    :
    native{YType::empty, "native"}
{

    yang_name = "tag"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::Tag::~Tag()
{
}

bool Native::Vlan::Dot1Q::Tag::has_data() const
{
    return native.is_set;
}

bool Native::Vlan::Dot1Q::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Vlan::Dot1Q::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:dot1q/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Dot1Q::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Dot1Q::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Vlan::Dot1Q::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native")
        return true;
    return false;
}

Native::Vlan::AccessLog::AccessLog()
    :
    maxflow{YType::uint16, "maxflow"},
    ratelimit{YType::uint16, "ratelimit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "access-log"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessLog::~AccessLog()
{
}

bool Native::Vlan::AccessLog::has_data() const
{
    return maxflow.is_set
	|| ratelimit.is_set
	|| threshold.is_set;
}

bool Native::Vlan::AccessLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxflow.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vlan::AccessLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxflow.is_set || is_set(maxflow.yfilter)) leaf_name_data.push_back(maxflow.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxflow")
    {
        maxflow = value;
        maxflow.value_namespace = name_space;
        maxflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxflow")
    {
        maxflow.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxflow" || name == "ratelimit" || name == "threshold")
        return true;
    return false;
}

Native::Vlan::VlanList::VlanList()
    :
    id{YType::str, "id"},
    remote_span{YType::empty, "remote-span"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    uni_vlan{YType::enumeration, "uni-vlan"}
    	,
    private_vlan(std::make_shared<Native::Vlan::VlanList::PrivateVlan>())
	,lldp(std::make_shared<Native::Vlan::VlanList::Lldp>())
{
    private_vlan->parent = this;
    lldp->parent = this;

    yang_name = "vlan-list"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::VlanList::~VlanList()
{
}

bool Native::Vlan::VlanList::has_data() const
{
    return id.is_set
	|| remote_span.is_set
	|| name.is_set
	|| state.is_set
	|| uni_vlan.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (lldp !=  nullptr && lldp->has_data());
}

bool Native::Vlan::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_span.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(uni_vlan.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation());
}

std::string Native::Vlan::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vlan-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_span.is_set || is_set(remote_span.yfilter)) leaf_name_data.push_back(remote_span.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (uni_vlan.is_set || is_set(uni_vlan.yfilter)) leaf_name_data.push_back(uni_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Vlan::VlanList::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Vlan::VlanList::Lldp>();
        }
        return lldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    return children;
}

void Native::Vlan::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-span")
    {
        remote_span = value;
        remote_span.value_namespace = name_space;
        remote_span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan = value;
        uni_vlan.value_namespace = name_space;
        uni_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-span")
    {
        remote_span.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-vlan" || name == "lldp" || name == "id" || name == "remote-span" || name == "name" || name == "state" || name == "uni-vlan")
        return true;
    return false;
}

Native::Vlan::VlanList::PrivateVlan::PrivateVlan()
    :
    primary{YType::empty, "primary"},
    association{YType::str, "association"},
    community{YType::empty, "community"},
    isolated{YType::empty, "isolated"}
{

    yang_name = "private-vlan"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::PrivateVlan::~PrivateVlan()
{
}

bool Native::Vlan::VlanList::PrivateVlan::has_data() const
{
    return primary.is_set
	|| association.is_set
	|| community.is_set
	|| isolated.is_set;
}

bool Native::Vlan::VlanList::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(association.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(isolated.yfilter);
}

std::string Native::Vlan::VlanList::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (association.is_set || is_set(association.yfilter)) leaf_name_data.push_back(association.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.yfilter)) leaf_name_data.push_back(isolated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::VlanList::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association")
    {
        association = value;
        association.value_namespace = name_space;
        association.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolated")
    {
        isolated = value;
        isolated.value_namespace = name_space;
        isolated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "association")
    {
        association.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "isolated")
    {
        isolated.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "association" || name == "community" || name == "isolated")
        return true;
    return false;
}

Native::Vlan::VlanList::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::Lldp::~Lldp()
{
}

bool Native::Vlan::VlanList::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Vlan::VlanList::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Vlan::VlanList::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::VlanList::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Cdp::Cdp()
    :
    holdtime{YType::uint8, "Cisco-IOS-XE-cdp:holdtime"},
    timer{YType::uint8, "Cisco-IOS-XE-cdp:timer"},
    run{YType::empty, "Cisco-IOS-XE-cdp:run"}
{

    yang_name = "cdp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cdp::~Cdp()
{
}

bool Native::Cdp::has_data() const
{
    return holdtime.is_set
	|| timer.is_set
	|| run.is_set;
}

bool Native::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Cdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cdp:holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "timer" || name == "run")
        return true;
    return false;
}

Native::Avc::Avc()
    :
    dns_as(std::make_shared<Native::Avc::DnsAs>())
	,sd_service(nullptr) // presence node
{
    dns_as->parent = this;

    yang_name = "avc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::~Avc()
{
}

bool Native::Avc::has_data() const
{
    return (dns_as !=  nullptr && dns_as->has_data())
	|| (sd_service !=  nullptr && sd_service->has_data());
}

bool Native::Avc::has_operation() const
{
    return is_set(yfilter)
	|| (dns_as !=  nullptr && dns_as->has_operation())
	|| (sd_service !=  nullptr && sd_service->has_operation());
}

std::string Native::Avc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nbar:dns-as")
    {
        if(dns_as == nullptr)
        {
            dns_as = std::make_shared<Native::Avc::DnsAs>();
        }
        return dns_as;
    }

    if(child_yang_name == "Cisco-IOS-XE-nbar:sd-service")
    {
        if(sd_service == nullptr)
        {
            sd_service = std::make_shared<Native::Avc::SdService>();
        }
        return sd_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dns_as != nullptr)
    {
        children["Cisco-IOS-XE-nbar:dns-as"] = dns_as;
    }

    if(sd_service != nullptr)
    {
        children["Cisco-IOS-XE-nbar:sd-service"] = sd_service;
    }

    return children;
}

void Native::Avc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-as" || name == "sd-service")
        return true;
    return false;
}

Native::Avc::DnsAs::DnsAs()
    :
    client(std::make_shared<Native::Avc::DnsAs::Client>())
{
    client->parent = this;

    yang_name = "dns-as"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::~DnsAs()
{
}

bool Native::Avc::DnsAs::has_data() const
{
    return (client !=  nullptr && client->has_data());
}

bool Native::Avc::DnsAs::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Avc::DnsAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:dns-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Avc::DnsAs::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Avc::DnsAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::DnsAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::DnsAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Avc::DnsAs::Client::Client()
    :
    enable{YType::empty, "enable"}
    	,
    trusted_domains(nullptr) // presence node
{

    yang_name = "client"; yang_parent_name = "dns-as"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::Client::~Client()
{
}

bool Native::Avc::DnsAs::Client::has_data() const
{
    return enable.is_set
	|| (trusted_domains !=  nullptr && trusted_domains->has_data());
}

bool Native::Avc::DnsAs::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (trusted_domains !=  nullptr && trusted_domains->has_operation());
}

std::string Native::Avc::DnsAs::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:dns-as/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trusted-domains")
    {
        if(trusted_domains == nullptr)
        {
            trusted_domains = std::make_shared<Native::Avc::DnsAs::Client::TrustedDomains>();
        }
        return trusted_domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trusted_domains != nullptr)
    {
        children["trusted-domains"] = trusted_domains;
    }

    return children;
}

void Native::Avc::DnsAs::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::DnsAs::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Avc::DnsAs::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trusted-domains" || name == "enable")
        return true;
    return false;
}

Native::Avc::DnsAs::Client::TrustedDomains::TrustedDomains()
    :
    domain{YType::str, "domain"}
{

    yang_name = "trusted-domains"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::Client::TrustedDomains::~TrustedDomains()
{
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_data() const
{
    return domain.is_set;
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Avc::DnsAs::Client::TrustedDomains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:dns-as/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::Client::TrustedDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::Client::TrustedDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::Client::TrustedDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::Client::TrustedDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::DnsAs::Client::TrustedDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::DnsAs::Client::TrustedDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::Avc::SdService::SdService()
    :
    segment{YType::str, "segment"}
    	,
    controller(nullptr) // presence node
{

    yang_name = "sd-service"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::~SdService()
{
}

bool Native::Avc::SdService::has_data() const
{
    return segment.is_set
	|| (controller !=  nullptr && controller->has_data());
}

bool Native::Avc::SdService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment.yfilter)
	|| (controller !=  nullptr && controller->has_operation());
}

std::string Native::Avc::SdService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:sd-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment.is_set || is_set(segment.yfilter)) leaf_name_data.push_back(segment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Avc::SdService::Controller>();
        }
        return controller;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controller != nullptr)
    {
        children["controller"] = controller;
    }

    return children;
}

void Native::Avc::SdService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment")
    {
        segment = value;
        segment.value_namespace = name_space;
        segment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment")
    {
        segment.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "segment")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Controller()
    :
    dscp{YType::uint8, "dscp"},
    vrf{YType::str, "vrf"}
    	,
    address(std::make_shared<Native::Avc::SdService::Controller::Address>())
	,destination_ports(std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>())
{
    address->parent = this;
    destination_ports->parent = this;

    yang_name = "controller"; yang_parent_name = "sd-service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::~Controller()
{
}

bool Native::Avc::SdService::Controller::has_data() const
{
    return dscp.is_set
	|| vrf.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_ports !=  nullptr && destination_ports->has_data());
}

bool Native::Avc::SdService::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_ports !=  nullptr && destination_ports->has_operation());
}

std::string Native::Avc::SdService::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Avc::SdService::Controller::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-ports")
    {
        if(destination_ports == nullptr)
        {
            destination_ports = std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>();
        }
        return destination_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_ports != nullptr)
    {
        children["destination-ports"] = destination_ports;
    }

    return children;
}

void Native::Avc::SdService::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "destination-ports" || name == "dscp" || name == "vrf")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Address()
{

    yang_name = "address"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::Address::~Address()
{
}

bool Native::Avc::SdService::Controller::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Avc::SdService::Controller::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Avc::SdService::Controller::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto c = std::make_shared<Native::Avc::SdService::Controller::Address::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_or_hostname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Avc::SdService::Controller::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::SdService::Controller::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::SdService::Controller::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    ipv4_or_hostname0{YType::str, "ipv4-or-hostname0"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| ipv4_or_hostname0.is_set;
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(ipv4_or_hostname0.yfilter);
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (ipv4_or_hostname0.is_set || is_set(ipv4_or_hostname0.yfilter)) leaf_name_data.push_back(ipv4_or_hostname0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0 = value;
        ipv4_or_hostname0.value_namespace = name_space;
        ipv4_or_hostname0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "ipv4-or-hostname0")
        return true;
    return false;
}

Native::Avc::SdService::Controller::DestinationPorts::DestinationPorts()
    :
    sensor_exporter{YType::uint16, "sensor-exporter"}
{

    yang_name = "destination-ports"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::DestinationPorts::~DestinationPorts()
{
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_data() const
{
    return sensor_exporter.is_set;
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_exporter.yfilter);
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::DestinationPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_exporter.is_set || is_set(sensor_exporter.yfilter)) leaf_name_data.push_back(sensor_exporter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::DestinationPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::DestinationPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::SdService::Controller::DestinationPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-exporter")
    {
        sensor_exporter = value;
        sensor_exporter.value_namespace = name_space;
        sensor_exporter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::DestinationPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-exporter")
    {
        sensor_exporter.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-exporter")
        return true;
    return false;
}

Native::Policy::Policy()
{

    yang_name = "policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::~Policy()
{
}

bool Native::Policy::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:class-map")
    {
        auto c = std::make_shared<Native::Policy::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:policy-map")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::ClassMap::ClassMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    prematch{YType::enumeration, "prematch"},
    description{YType::str, "description"}
    	,
    match(std::make_shared<Native::Policy::ClassMap::Match>())
	,no_match(std::make_shared<Native::Policy::ClassMap::NoMatch>())
{
    match->parent = this;
    no_match->parent = this;

    yang_name = "class-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::ClassMap::~ClassMap()
{
}

bool Native::Policy::ClassMap::has_data() const
{
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| prematch.is_set
	|| description.is_set
	|| (match !=  nullptr && match->has_data())
	|| (no_match !=  nullptr && no_match->has_data());
}

bool Native::Policy::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(prematch.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (no_match !=  nullptr && no_match->has_operation());
}

std::string Native::Policy::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:class-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (prematch.is_set || is_set(prematch.yfilter)) leaf_name_data.push_back(prematch.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Policy::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "no-match")
    {
        if(no_match == nullptr)
        {
            no_match = std::make_shared<Native::Policy::ClassMap::NoMatch>();
        }
        return no_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(no_match != nullptr)
    {
        children["no-match"] = no_match;
    }

    return children;
}

void Native::Policy::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prematch")
    {
        prematch = value;
        prematch.value_namespace = name_space;
        prematch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "prematch")
    {
        prematch.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "no-match" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "prematch" || name == "description")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Match()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"}
    	,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Application>())
	,access_group(std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Vlan>())
	,authorization_status(std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::Match::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::Match::ResultType>())
	,not_(std::make_shared<Native::Policy::ClassMap::Match::Not>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;
    not_->parent = this;

    yang_name = "match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::~Match()
{
}

bool Native::Policy::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data())
	|| (not_ !=  nullptr && not_->has_data());
}

bool Native::Policy::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation())
	|| (not_ !=  nullptr && not_->has_operation());
}

std::string Native::Policy::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "activated-service-template")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::Match::ResultType>();
        }
        return result_type;
    }

    if(child_yang_name == "not")
    {
        if(not_ == nullptr)
        {
            not_ = std::make_shared<Native::Policy::ClassMap::Match::Not>();
        }
        return not_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    count = 0;
    for (auto const & c : activated_service_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    if(not_ != nullptr)
    {
        children["not"] = not_;
    }

    return children;
}

void Native::Policy::ClassMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type" || name == "not" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Policy::ClassMap::Match::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_data() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rtp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Protocol()
    :
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_data() const
{
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[protocols='" <<protocols <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Service::has_data() const
{
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[efp='" <<efp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::Match::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::Match::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::Match::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Not()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"}
    	,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Not::Application>())
	,access_group(std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;

    yang_name = "not"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::~Not()
{
}

bool Native::Policy::ClassMap::Match::Not::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Policy::ClassMap::Match::Not::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Not::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_data() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rtp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Protocol()
    :
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_data() const
{
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[protocols='" <<protocols <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Not::Service::has_data() const
{
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[efp='" <<efp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::NoMatch()
    :
    authorization_status(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::NoMatch::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>())
{
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;

    yang_name = "no-match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::~NoMatch()
{
}

bool Native::Policy::ClassMap::NoMatch::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    return (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data());
}

bool Native::Policy::ClassMap::NoMatch::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activated-service-template")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>();
        }
        return result_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : activated_service_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::NoMatch::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::PolicyMap::PolicyMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    description{YType::str, "description"},
    sequence_interval{YType::uint16, "sequence-interval"}
{

    yang_name = "policy-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::PolicyMap::~PolicyMap()
{
}

bool Native::Policy::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| description.is_set
	|| sequence_interval.is_set;
}

bool Native::Policy::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sequence_interval.yfilter);
}

std::string Native::Policy::PolicyMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:policy-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sequence_interval.is_set || is_set(sequence_interval.yfilter)) leaf_name_data.push_back(sequence_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    if(child_yang_name == "class")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : event)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval = value;
        sequence_interval.value_namespace = name_space;
        sequence_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "class" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "description" || name == "sequence-interval")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        c->parent = this;
        class_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "event-type" || name == "match-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
{

    yang_name = "class-number"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(execution_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.yfilter)) leaf_name_data.push_back(execution_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        c->parent = this;
        action_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : action_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
        execution_type.value_namespace = name_space;
        execution_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "execution-type")
    {
        execution_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-number" || name == "number" || name == "class" || name == "execution-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    replace{YType::empty, "replace"},
    clear_session{YType::empty, "clear-session"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"}
    	,
    terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
	,resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
	,pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
	,activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
	,authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
{
    terminate->parent = this;
    resume->parent = this;
    pause->parent = this;
    activate->parent = this;
    authenticate->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    return number.is_set
	|| replace.is_set
	|| clear_session.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| (terminate !=  nullptr && terminate->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(replace.yfilter)
	|| ydk::is_set(clear_session.yfilter)
	|| ydk::is_set(authentication_restart.yfilter)
	|| ydk::is_set(authorize.yfilter)
	|| (terminate !=  nullptr && terminate->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (replace.is_set || is_set(replace.yfilter)) leaf_name_data.push_back(replace.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.yfilter)) leaf_name_data.push_back(clear_session.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.yfilter)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.yfilter)) leaf_name_data.push_back(authorize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    if(resume != nullptr)
    {
        children["resume"] = resume;
    }

    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    if(activate != nullptr)
    {
        children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace")
    {
        replace = value;
        replace.value_namespace = name_space;
        replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
        clear_session.value_namespace = name_space;
        clear_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
        authentication_restart.value_namespace = name_space;
        authentication_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorize")
    {
        authorize = value;
        authorize.value_namespace = name_space;
        authorize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "replace")
    {
        replace.yfilter = yfilter;
    }
    if(value_path == "clear-session")
    {
        clear_session.yfilter = yfilter;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart.yfilter = yfilter;
    }
    if(value_path == "authorize")
    {
        authorize.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminate" || name == "resume" || name == "pause" || name == "activate" || name == "authenticate" || name == "number" || name == "replace" || name == "clear-session" || name == "authentication-restart" || name == "authorize")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "terminate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "resume"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "pause"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{

    yang_name = "activate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_template.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-template")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using_(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>())
{
    using_->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    return (using_ !=  nullptr && using_->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| (using_ !=  nullptr && using_->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using_ == nullptr)
        {
            using_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>();
        }
        return using_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(using_ != nullptr)
    {
        children["using"] = using_;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "using")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Using()
    :
    method{YType::enumeration, "method"},
    both{YType::empty, "both"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"},
    priority{YType::uint8, "priority"},
    parameter_map{YType::str, "parameter-map"}
{

    yang_name = "using"; yang_parent_name = "authenticate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::~Using()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_data() const
{
    return method.is_set
	|| both.is_set
	|| retries.is_set
	|| retry_time.is_set
	|| priority.is_set
	|| parameter_map.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(retry_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(parameter_map.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "both" || name == "retries" || name == "retry-time" || name == "priority" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Class()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    insert_before{YType::str, "insert-before"},
    random_detect{YType::empty, "random-detect"}
    	,
    appnav_policy(std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>())
	,policy(std::make_shared<Native::Policy::PolicyMap::Class::Policy_>())
	,pm_policy(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>())
	,inspect_police(std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>())
{
    appnav_policy->parent = this;
    policy->parent = this;
    pm_policy->parent = this;
    inspect_police->parent = this;

    yang_name = "class"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::~Class()
{
}

bool Native::Policy::PolicyMap::Class::has_data() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| insert_before.is_set
	|| random_detect.is_set
	|| (appnav_policy !=  nullptr && appnav_policy->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (pm_policy !=  nullptr && pm_policy->has_data())
	|| (inspect_police !=  nullptr && inspect_police->has_data());
}

bool Native::Policy::PolicyMap::Class::has_operation() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(insert_before.yfilter)
	|| ydk::is_set(random_detect.yfilter)
	|| (appnav_policy !=  nullptr && appnav_policy->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (pm_policy !=  nullptr && pm_policy->has_operation())
	|| (inspect_police !=  nullptr && inspect_police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());
    if (random_detect.is_set || is_set(random_detect.yfilter)) leaf_name_data.push_back(random_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-policy")
    {
        if(appnav_policy == nullptr)
        {
            appnav_policy = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>();
        }
        return appnav_policy;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy::PolicyMap::Class::Policy_>();
        }
        return policy;
    }

    if(child_yang_name == "pm-policy")
    {
        if(pm_policy == nullptr)
        {
            pm_policy = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>();
        }
        return pm_policy;
    }

    if(child_yang_name == "inspect-police")
    {
        if(inspect_police == nullptr)
        {
            inspect_police = std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>();
        }
        return inspect_police;
    }

    if(child_yang_name == "action-list")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::ActionList>();
        c->parent = this;
        action_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(appnav_policy != nullptr)
    {
        children["appnav-policy"] = appnav_policy;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(pm_policy != nullptr)
    {
        children["pm-policy"] = pm_policy;
    }

    if(inspect_police != nullptr)
    {
        children["inspect-police"] = inspect_police;
    }

    count = 0;
    for (auto const & c : action_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-detect")
    {
        random_detect = value;
        random_detect.value_namespace = name_space;
        random_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
    if(value_path == "random-detect")
    {
        random_detect.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-policy" || name == "policy" || name == "pm-policy" || name == "inspect-police" || name == "action-list" || name == "name" || name == "type" || name == "insert-before" || name == "random-detect")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "appnav-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_data() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_load.yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.yfilter)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute>();
        c->parent = this;
        distribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : distribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
        monitor_load.value_namespace = name_space;
        monitor_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-load")
    {
        monitor_load.yfilter = yfilter;
    }
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "monitor-load" || name == "pass-through")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{

    yang_name = "distribute"; yang_parent_name = "appnav-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_data() const
{
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(insert_before.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute" <<"[service-node-group='" <<service_node_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-node-group" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
    	,
    dpi(std::make_shared<Native::Policy::PolicyMap::Class::Policy_::Dpi>())
{
    dpi->parent = this;

    yang_name = "policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class::Policy_::has_data() const
{
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set
	|| (dpi !=  nullptr && dpi->has_data());
}

bool Native::Policy::PolicyMap::Class::Policy_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(parameter_map.yfilter)
	|| (dpi !=  nullptr && dpi->has_operation());
}

std::string Native::Policy::PolicyMap::Class::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Policy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpi")
    {
        if(dpi == nullptr)
        {
            dpi = std::make_shared<Native::Policy::PolicyMap::Class::Policy_::Dpi>();
        }
        return dpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dpi != nullptr)
    {
        children["dpi"] = dpi;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::Policy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Policy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Policy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpi" || name == "action" || name == "log" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Policy_::Dpi::Dpi()
    :
    type{YType::enumeration, "type"},
    policy_map{YType::str, "policy-map"}
{

    yang_name = "dpi"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::Policy_::Dpi::~Dpi()
{
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_data() const
{
    return type.is_set
	|| policy_map.is_set;
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(policy_map.yfilter);
}

std::string Native::Policy::PolicyMap::Class::Policy_::Dpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Policy_::Dpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (policy_map.is_set || is_set(policy_map.yfilter)) leaf_name_data.push_back(policy_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::Policy_::Dpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::Policy_::Dpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::Policy_::Dpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map")
    {
        policy_map = value;
        policy_map.value_namespace = name_space;
        policy_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Policy_::Dpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "policy-map")
    {
        policy_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>())
	,monitor(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>())
{
    flow->parent = this;
    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_data() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React>();
        c->parent = this;
        react.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    count = 0;
    for (auto const & c : react)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "monitor" || name == "react")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "flow"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_data() const
{
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

const Enum::YLeaf Native::Ipv6::Spd::Mode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Ipv6::Rip::VrfMode::enable {0, "enable"};

const Enum::YLeaf Native::Vlan::AccessMap::Action::drop {0, "drop"};
const Enum::YLeaf Native::Vlan::AccessMap::Action::forward {1, "forward"};

const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::ascending {0, "ascending"};
const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::descending {1, "descending"};

const Enum::YLeaf Native::Vlan::VlanList::State::active {0, "active"};
const Enum::YLeaf Native::Vlan::VlanList::State::suspend {1, "suspend"};

const Enum::YLeaf Native::Vlan::VlanList::UniVlan::community {0, "community"};
const Enum::YLeaf Native::Vlan::VlanList::UniVlan::isolated {1, "isolated"};

const Enum::YLeaf Native::Policy::ClassMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::ClassMap::Type::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::inspect {3, "inspect"};
const Enum::YLeaf Native::Policy::ClassMap::Type::multicast_flows {4, "multicast-flows"};
const Enum::YLeaf Native::Policy::ClassMap::Type::stack {5, "stack"};
const Enum::YLeaf Native::Policy::ClassMap::Type::traffic {6, "traffic"};

const Enum::YLeaf Native::Policy::ClassMap::Protocol::aol {0, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::edonkey {1, "edonkey"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::fasttrack {2, "fasttrack"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::gnutella {3, "gnutella"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::http {4, "http"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::imap {5, "imap"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::kazaa2 {6, "kazaa2"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::msnmsgr {7, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::pop3 {8, "pop3"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::smtp {9, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::sunrpc {10, "sunrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::ymsgr {11, "ymsgr"};

const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_any {1, "match-any"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_none {2, "match-none"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::control {3, "control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::packet_service {4, "packet-service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::performance_monitor {5, "performance-monitor"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service {6, "service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service_chain {7, "service-chain"};

const Enum::YLeaf Native::Policy::PolicyMap::Protocol::http {0, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::im {1, "im"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::p2p {3, "p2p"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::pop3 {4, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::smtp {5, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::sunrpc {6, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::Class_::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::webauth {2, "webauth"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Type::inspect {0, "inspect"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::pass {3, "pass"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::service_policy {4, "service-policy"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::ParameterMap::global {0, "global"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::ParameterMap::gtp {1, "gtp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::gtpv0 {0, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::gtpv1 {1, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::pop3 {3, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::smtp {4, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::sunrpc {5, "sunrpc"};


}
}

