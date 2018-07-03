
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_ship.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_ship {

Stat::Stat()
    :
    ship_comp(this, {"comp_name"})
{

    yang_name = "stat"; yang_parent_name = "Cisco-IOS-XR-sysadmin-ship"; is_top_level_class = true; has_list_ancestor = false; 
}

Stat::~Stat()
{
}

bool Stat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ship_comp.len(); index++)
    {
        if(ship_comp[index]->has_data())
            return true;
    }
    return false;
}

bool Stat::has_operation() const
{
    for (std::size_t index=0; index<ship_comp.len(); index++)
    {
        if(ship_comp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ship:stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ship_comp")
    {
        auto c = std::make_shared<Stat::ShipComp>();
        c->parent = this;
        ship_comp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ship_comp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Stat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Stat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Stat::clone_ptr() const
{
    return std::make_shared<Stat>();
}

std::string Stat::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Stat::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Stat::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Stat::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Stat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ship_comp")
        return true;
    return false;
}

Stat::ShipComp::ShipComp()
    :
    comp_name{YType::str, "comp-name"}
        ,
    process(this, {"process_name"})
{

    yang_name = "ship_comp"; yang_parent_name = "stat"; is_top_level_class = false; has_list_ancestor = false; 
}

Stat::ShipComp::~ShipComp()
{
}

bool Stat::ShipComp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return comp_name.is_set;
}

bool Stat::ShipComp::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(comp_name.yfilter);
}

std::string Stat::ShipComp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ship:stat/" << get_segment_path();
    return path_buffer.str();
}

std::string Stat::ShipComp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ship_comp";
    ADD_KEY_TOKEN(comp_name, "comp-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::ShipComp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comp_name.is_set || is_set(comp_name.yfilter)) leaf_name_data.push_back(comp_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::ShipComp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<Stat::ShipComp::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::ShipComp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Stat::ShipComp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comp-name")
    {
        comp_name = value;
        comp_name.value_namespace = name_space;
        comp_name.value_namespace_prefix = name_space_prefix;
    }
}

void Stat::ShipComp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comp-name")
    {
        comp_name.yfilter = yfilter;
    }
}

bool Stat::ShipComp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "comp-name")
        return true;
    return false;
}

Stat::ShipComp::Process::Process()
    :
    process_name{YType::str, "process-name"}
        ,
    client(this, {"client_name"})
{

    yang_name = "process"; yang_parent_name = "ship_comp"; is_top_level_class = false; has_list_ancestor = true; 
}

Stat::ShipComp::Process::~Process()
{
}

bool Stat::ShipComp::Process::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return process_name.is_set;
}

bool Stat::ShipComp::Process::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Stat::ShipComp::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_name, "process-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::ShipComp::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::ShipComp::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto c = std::make_shared<Stat::ShipComp::Process::Client>();
        c->parent = this;
        client.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::ShipComp::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Stat::ShipComp::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Stat::ShipComp::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Stat::ShipComp::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "process-name")
        return true;
    return false;
}

Stat::ShipComp::Process::Client::Client()
    :
    client_name{YType::str, "client-name"}
        ,
    cat(this, {"cat_name"})
{

    yang_name = "client"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Stat::ShipComp::Process::Client::~Client()
{
}

bool Stat::ShipComp::Process::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cat.len(); index++)
    {
        if(cat[index]->has_data())
            return true;
    }
    return client_name.is_set;
}

bool Stat::ShipComp::Process::Client::has_operation() const
{
    for (std::size_t index=0; index<cat.len(); index++)
    {
        if(cat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter);
}

std::string Stat::ShipComp::Process::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(client_name, "client-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::ShipComp::Process::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::ShipComp::Process::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cat")
    {
        auto c = std::make_shared<Stat::ShipComp::Process::Client::Cat>();
        c->parent = this;
        cat.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::ShipComp::Process::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cat.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Stat::ShipComp::Process::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
}

void Stat::ShipComp::Process::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
}

bool Stat::ShipComp::Process::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cat" || name == "client-name")
        return true;
    return false;
}

Stat::ShipComp::Process::Client::Cat::Cat()
    :
    cat_name{YType::enumeration, "cat-name"}
        ,
    counter_32b(this, {"counter_name"})
{

    yang_name = "cat"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Stat::ShipComp::Process::Client::Cat::~Cat()
{
}

bool Stat::ShipComp::Process::Client::Cat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<counter_32b.len(); index++)
    {
        if(counter_32b[index]->has_data())
            return true;
    }
    return cat_name.is_set;
}

bool Stat::ShipComp::Process::Client::Cat::has_operation() const
{
    for (std::size_t index=0; index<counter_32b.len(); index++)
    {
        if(counter_32b[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cat_name.yfilter);
}

std::string Stat::ShipComp::Process::Client::Cat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cat";
    ADD_KEY_TOKEN(cat_name, "cat-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::ShipComp::Process::Client::Cat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cat_name.is_set || is_set(cat_name.yfilter)) leaf_name_data.push_back(cat_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::ShipComp::Process::Client::Cat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-32b")
    {
        auto c = std::make_shared<Stat::ShipComp::Process::Client::Cat::Counter32b>();
        c->parent = this;
        counter_32b.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::ShipComp::Process::Client::Cat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : counter_32b.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Stat::ShipComp::Process::Client::Cat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cat-name")
    {
        cat_name = value;
        cat_name.value_namespace = name_space;
        cat_name.value_namespace_prefix = name_space_prefix;
    }
}

void Stat::ShipComp::Process::Client::Cat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cat-name")
    {
        cat_name.yfilter = yfilter;
    }
}

bool Stat::ShipComp::Process::Client::Cat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-32b" || name == "cat-name")
        return true;
    return false;
}

Stat::ShipComp::Process::Client::Cat::Counter32b::Counter32b()
    :
    counter_name{YType::str, "counter-name"},
    counter_value{YType::uint32, "counter-value"},
    watermark{YType::uint32, "watermark"},
    time_stamp{YType::uint64, "time-stamp"},
    hist_info1{YType::uint32, "hist-info1"},
    hist_info2{YType::uint32, "hist-info2"},
    hist_info3{YType::uint32, "hist-info3"},
    hist_info4{YType::uint32, "hist-info4"},
    hist_info5{YType::uint32, "hist-info5"},
    hist_info6{YType::uint32, "hist-info6"},
    hist_info7{YType::uint32, "hist-info7"},
    hist_info8{YType::uint32, "hist-info8"}
{

    yang_name = "counter-32b"; yang_parent_name = "cat"; is_top_level_class = false; has_list_ancestor = true; 
}

Stat::ShipComp::Process::Client::Cat::Counter32b::~Counter32b()
{
}

bool Stat::ShipComp::Process::Client::Cat::Counter32b::has_data() const
{
    if (is_presence_container) return true;
    return counter_name.is_set
	|| counter_value.is_set
	|| watermark.is_set
	|| time_stamp.is_set
	|| hist_info1.is_set
	|| hist_info2.is_set
	|| hist_info3.is_set
	|| hist_info4.is_set
	|| hist_info5.is_set
	|| hist_info6.is_set
	|| hist_info7.is_set
	|| hist_info8.is_set;
}

bool Stat::ShipComp::Process::Client::Cat::Counter32b::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(counter_value.yfilter)
	|| ydk::is_set(watermark.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(hist_info1.yfilter)
	|| ydk::is_set(hist_info2.yfilter)
	|| ydk::is_set(hist_info3.yfilter)
	|| ydk::is_set(hist_info4.yfilter)
	|| ydk::is_set(hist_info5.yfilter)
	|| ydk::is_set(hist_info6.yfilter)
	|| ydk::is_set(hist_info7.yfilter)
	|| ydk::is_set(hist_info8.yfilter);
}

std::string Stat::ShipComp::Process::Client::Cat::Counter32b::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-32b";
    ADD_KEY_TOKEN(counter_name, "counter-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stat::ShipComp::Process::Client::Cat::Counter32b::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (counter_value.is_set || is_set(counter_value.yfilter)) leaf_name_data.push_back(counter_value.get_name_leafdata());
    if (watermark.is_set || is_set(watermark.yfilter)) leaf_name_data.push_back(watermark.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (hist_info1.is_set || is_set(hist_info1.yfilter)) leaf_name_data.push_back(hist_info1.get_name_leafdata());
    if (hist_info2.is_set || is_set(hist_info2.yfilter)) leaf_name_data.push_back(hist_info2.get_name_leafdata());
    if (hist_info3.is_set || is_set(hist_info3.yfilter)) leaf_name_data.push_back(hist_info3.get_name_leafdata());
    if (hist_info4.is_set || is_set(hist_info4.yfilter)) leaf_name_data.push_back(hist_info4.get_name_leafdata());
    if (hist_info5.is_set || is_set(hist_info5.yfilter)) leaf_name_data.push_back(hist_info5.get_name_leafdata());
    if (hist_info6.is_set || is_set(hist_info6.yfilter)) leaf_name_data.push_back(hist_info6.get_name_leafdata());
    if (hist_info7.is_set || is_set(hist_info7.yfilter)) leaf_name_data.push_back(hist_info7.get_name_leafdata());
    if (hist_info8.is_set || is_set(hist_info8.yfilter)) leaf_name_data.push_back(hist_info8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Stat::ShipComp::Process::Client::Cat::Counter32b::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Stat::ShipComp::Process::Client::Cat::Counter32b::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Stat::ShipComp::Process::Client::Cat::Counter32b::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-value")
    {
        counter_value = value;
        counter_value.value_namespace = name_space;
        counter_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watermark")
    {
        watermark = value;
        watermark.value_namespace = name_space;
        watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info1")
    {
        hist_info1 = value;
        hist_info1.value_namespace = name_space;
        hist_info1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info2")
    {
        hist_info2 = value;
        hist_info2.value_namespace = name_space;
        hist_info2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info3")
    {
        hist_info3 = value;
        hist_info3.value_namespace = name_space;
        hist_info3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info4")
    {
        hist_info4 = value;
        hist_info4.value_namespace = name_space;
        hist_info4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info5")
    {
        hist_info5 = value;
        hist_info5.value_namespace = name_space;
        hist_info5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info6")
    {
        hist_info6 = value;
        hist_info6.value_namespace = name_space;
        hist_info6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info7")
    {
        hist_info7 = value;
        hist_info7.value_namespace = name_space;
        hist_info7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hist-info8")
    {
        hist_info8 = value;
        hist_info8.value_namespace = name_space;
        hist_info8.value_namespace_prefix = name_space_prefix;
    }
}

void Stat::ShipComp::Process::Client::Cat::Counter32b::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "counter-value")
    {
        counter_value.yfilter = yfilter;
    }
    if(value_path == "watermark")
    {
        watermark.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "hist-info1")
    {
        hist_info1.yfilter = yfilter;
    }
    if(value_path == "hist-info2")
    {
        hist_info2.yfilter = yfilter;
    }
    if(value_path == "hist-info3")
    {
        hist_info3.yfilter = yfilter;
    }
    if(value_path == "hist-info4")
    {
        hist_info4.yfilter = yfilter;
    }
    if(value_path == "hist-info5")
    {
        hist_info5.yfilter = yfilter;
    }
    if(value_path == "hist-info6")
    {
        hist_info6.yfilter = yfilter;
    }
    if(value_path == "hist-info7")
    {
        hist_info7.yfilter = yfilter;
    }
    if(value_path == "hist-info8")
    {
        hist_info8.yfilter = yfilter;
    }
}

bool Stat::ShipComp::Process::Client::Cat::Counter32b::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-name" || name == "counter-value" || name == "watermark" || name == "time-stamp" || name == "hist-info1" || name == "hist-info2" || name == "hist-info3" || name == "hist-info4" || name == "hist-info5" || name == "hist-info6" || name == "hist-info7" || name == "hist-info8")
        return true;
    return false;
}

const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_TRANSPORT_COUNTERS {0, "SHIP_TRANSPORT_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_SERVER_COUNTERS {1, "SHIP_SERVER_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_CLIENT_LIB_COUNTERS {2, "SHIP_CLIENT_LIB_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_REPLICATION_COUNTERS {3, "SHIP_REPLICATION_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_READER_REPLICA_COUNTERS {4, "SHIP_READER_REPLICA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_WRITER_REPLICA_COUNTERS {5, "SHIP_WRITER_REPLICA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_TRANSPORT_COUNTERS_FAILOVER {6, "SHIP_TRANSPORT_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_SERVER_COUNTERS_FAILOVER {7, "SHIP_SERVER_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_CLIENT_LIB_COUNTERS_FAILOVER {8, "SHIP_CLIENT_LIB_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_REPLICATION_COUNTERS_FAILOVER {9, "SHIP_REPLICATION_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_TRANSPORT_ERRORS {10, "SHIP_TRANSPORT_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_SERVER_ERRORS {11, "SHIP_SERVER_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_CLIENT_LIB_ERRORS {12, "SHIP_CLIENT_LIB_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_REPLICATION_ERRORS {13, "SHIP_REPLICATION_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_READER_REPLICA_ERRORS {14, "SHIP_READER_REPLICA_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_WRITER_REPLICA_ERRORS {15, "SHIP_WRITER_REPLICA_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_TRANSPORT_ERRORS_FAILOVER {16, "SHIP_TRANSPORT_ERRORS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_SERVER_ERRORS_FAILOVER {17, "SHIP_SERVER_ERRORS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_CLIENT_LIB_ERRORS_FAILOVER {18, "SHIP_CLIENT_LIB_ERRORS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_REPLICATION_ERRORS_FAILOVER {19, "SHIP_REPLICATION_ERRORS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::FEATURE_MA_COUNTERS {20, "FEATURE_MA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::FEATURE_MA_COUNTERS_ERRORS {21, "FEATURE_MA_COUNTERS_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::FEATURE_MA_COUNTERS_FAILOVER {22, "FEATURE_MA_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_MA_COUNTERS {23, "VIRTUAL_INTERFACE_MA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_MA_COUNTERS_ERRORS {24, "VIRTUAL_INTERFACE_MA_COUNTERS_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_MA_COUNTERS_FAILOVER {25, "VIRTUAL_INTERFACE_MA_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::FEATURE_EA_COUNTERS {26, "FEATURE_EA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::FEATURE_EA_COUNTERS_ERRORS {27, "FEATURE_EA_COUNTERS_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_EA_COUNTERS {28, "VIRTUAL_INTERFACE_EA_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_EA_COUNTERS_ERRORS {29, "VIRTUAL_INTERFACE_EA_COUNTERS_ERRORS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::VIRTUAL_INTERFACE_EA_COUNTERS_FAILOVER {30, "VIRTUAL_INTERFACE_EA_COUNTERS_FAILOVER"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_HISTOGRAM_COUNTERS {31, "SHIP_HISTOGRAM_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_WATERMARK_COUNTERS {32, "SHIP_WATERMARK_COUNTERS"};
const Enum::YLeaf Stat::ShipComp::Process::Client::Cat::CatName::SHIP_NODE_COUNTERS {33, "SHIP_NODE_COUNTERS"};


}
}

