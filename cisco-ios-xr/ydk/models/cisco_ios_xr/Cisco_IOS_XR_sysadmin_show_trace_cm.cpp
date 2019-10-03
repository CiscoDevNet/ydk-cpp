
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_show_trace_cm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_show_trace_cm {

Cm::Cm()
    :
    trace(this, {"buffer"})
    , lsp(std::make_shared<Cm::Lsp>())
{
    lsp->parent = this;

    yang_name = "cm"; yang_parent_name = "Cisco-IOS-XR-sysadmin-show-trace-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

Cm::~Cm()
{
}

bool Cm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (lsp !=  nullptr && lsp->has_data());
}

bool Cm::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation());
}

std::string Cm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-trace-cm:cm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Cm::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-cm:lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Cm::Lsp>();
        }
        return lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(lsp != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-cm:lsp"] = lsp;
    }

    return _children;
}

void Cm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Cm::clone_ptr() const
{
    return std::make_shared<Cm>();
}

std::string Cm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Cm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "lsp")
        return true;
    return false;
}

Cm::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "cm"; is_top_level_class = false; has_list_ancestor = false; 
}

Cm::Trace::~Trace()
{
}

bool Cm::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Cm::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Cm::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-trace-cm:cm/" << get_segment_path();
    return path_buffer.str();
}

std::string Cm::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Cm::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cm::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Cm::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Cm::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Cm::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Cm::Trace::Location::~Location()
{
}

bool Cm::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Cm::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Cm::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Cm::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cm::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cm::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Cm::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Cm::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Cm::Trace::Location::AllOptions::~AllOptions()
{
}

bool Cm::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Cm::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Cm::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Cm::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cm::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Cm::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Cm::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Cm::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Cm::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Cm::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Cm::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Cm::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cm::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Cm::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Cm::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Cm::Lsp::Lsp()
    :
    lspdb_locations(this, {"lspdb_location"})
{

    yang_name = "lsp"; yang_parent_name = "cm"; is_top_level_class = false; has_list_ancestor = false; 
}

Cm::Lsp::~Lsp()
{
}

bool Cm::Lsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lspdb_locations.len(); index++)
    {
        if(lspdb_locations[index]->has_data())
            return true;
    }
    return false;
}

bool Cm::Lsp::has_operation() const
{
    for (std::size_t index=0; index<lspdb_locations.len(); index++)
    {
        if(lspdb_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cm::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-trace-cm:cm/" << get_segment_path();
    return path_buffer.str();
}

std::string Cm::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lspdb_locations")
    {
        auto ent_ = std::make_shared<Cm::Lsp::LspdbLocations>();
        ent_->parent = this;
        lspdb_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lspdb_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cm::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cm::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cm::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspdb_locations")
        return true;
    return false;
}

Cm::Lsp::LspdbLocations::LspdbLocations()
    :
    lspdb_location{YType::str, "lspdb_location"}
        ,
    lspdbi(this, {"lsp_id", "lsp_area_type"})
{

    yang_name = "lspdb_locations"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

Cm::Lsp::LspdbLocations::~LspdbLocations()
{
}

bool Cm::Lsp::LspdbLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lspdbi.len(); index++)
    {
        if(lspdbi[index]->has_data())
            return true;
    }
    return lspdb_location.is_set;
}

bool Cm::Lsp::LspdbLocations::has_operation() const
{
    for (std::size_t index=0; index<lspdbi.len(); index++)
    {
        if(lspdbi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lspdb_location.yfilter);
}

std::string Cm::Lsp::LspdbLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-trace-cm:cm/Cisco-IOS-XR-sysadmin-cm:lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Cm::Lsp::LspdbLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspdb_locations";
    ADD_KEY_TOKEN(lspdb_location, "lspdb_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Lsp::LspdbLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspdb_location.is_set || is_set(lspdb_location.yfilter)) leaf_name_data.push_back(lspdb_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Lsp::LspdbLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lspdbi")
    {
        auto ent_ = std::make_shared<Cm::Lsp::LspdbLocations::Lspdbi>();
        ent_->parent = this;
        lspdbi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Lsp::LspdbLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lspdbi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cm::Lsp::LspdbLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspdb_location")
    {
        lspdb_location = value;
        lspdb_location.value_namespace = name_space;
        lspdb_location.value_namespace_prefix = name_space_prefix;
    }
}

void Cm::Lsp::LspdbLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspdb_location")
    {
        lspdb_location.yfilter = yfilter;
    }
}

bool Cm::Lsp::LspdbLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspdbi" || name == "lspdb_location")
        return true;
    return false;
}

Cm::Lsp::LspdbLocations::Lspdbi::Lspdbi()
    :
    lsp_id{YType::str, "lsp_id"},
    lsp_area_type{YType::enumeration, "lsp_area_type"},
    lsp_sequence{YType::uint32, "lsp_sequence"},
    lsp_core{YType::str, "lsp_core"},
    lsp_tlvs{YType::str, "lsp_tlvs"}
{

    yang_name = "lspdbi"; yang_parent_name = "lspdb_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Cm::Lsp::LspdbLocations::Lspdbi::~Lspdbi()
{
}

bool Cm::Lsp::LspdbLocations::Lspdbi::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lsp_tlvs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_id.is_set
	|| lsp_area_type.is_set
	|| lsp_sequence.is_set
	|| lsp_core.is_set;
}

bool Cm::Lsp::LspdbLocations::Lspdbi::has_operation() const
{
    for (auto const & leaf : lsp_tlvs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_area_type.yfilter)
	|| ydk::is_set(lsp_sequence.yfilter)
	|| ydk::is_set(lsp_core.yfilter)
	|| ydk::is_set(lsp_tlvs.yfilter);
}

std::string Cm::Lsp::LspdbLocations::Lspdbi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspdbi";
    ADD_KEY_TOKEN(lsp_id, "lsp_id");
    ADD_KEY_TOKEN(lsp_area_type, "lsp_area_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cm::Lsp::LspdbLocations::Lspdbi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_area_type.is_set || is_set(lsp_area_type.yfilter)) leaf_name_data.push_back(lsp_area_type.get_name_leafdata());
    if (lsp_sequence.is_set || is_set(lsp_sequence.yfilter)) leaf_name_data.push_back(lsp_sequence.get_name_leafdata());
    if (lsp_core.is_set || is_set(lsp_core.yfilter)) leaf_name_data.push_back(lsp_core.get_name_leafdata());

    auto lsp_tlvs_name_datas = lsp_tlvs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsp_tlvs_name_datas.begin(), lsp_tlvs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cm::Lsp::LspdbLocations::Lspdbi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cm::Lsp::LspdbLocations::Lspdbi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cm::Lsp::LspdbLocations::Lspdbi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp_id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp_area_type")
    {
        lsp_area_type = value;
        lsp_area_type.value_namespace = name_space;
        lsp_area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp_sequence")
    {
        lsp_sequence = value;
        lsp_sequence.value_namespace = name_space;
        lsp_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp_core")
    {
        lsp_core = value;
        lsp_core.value_namespace = name_space;
        lsp_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp_tlvs")
    {
        lsp_tlvs.append(value);
    }
}

void Cm::Lsp::LspdbLocations::Lspdbi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp_id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp_area_type")
    {
        lsp_area_type.yfilter = yfilter;
    }
    if(value_path == "lsp_sequence")
    {
        lsp_sequence.yfilter = yfilter;
    }
    if(value_path == "lsp_core")
    {
        lsp_core.yfilter = yfilter;
    }
    if(value_path == "lsp_tlvs")
    {
        lsp_tlvs.yfilter = yfilter;
    }
}

bool Cm::Lsp::LspdbLocations::Lspdbi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp_id" || name == "lsp_area_type" || name == "lsp_sequence" || name == "lsp_core" || name == "lsp_tlvs")
        return true;
    return false;
}


}
}

