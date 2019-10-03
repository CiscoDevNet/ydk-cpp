
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ascii_ltrace_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ascii_ltrace_oper {

Ltrace::Ltrace()
    :
    features(std::make_shared<Ltrace::Features>())
{
    features->parent = this;

    yang_name = "ltrace"; yang_parent_name = "Cisco-IOS-XR-ascii-ltrace-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ltrace::~Ltrace()
{
}

bool Ltrace::has_data() const
{
    if (is_presence_container) return true;
    return (features !=  nullptr && features->has_data());
}

bool Ltrace::has_operation() const
{
    return is_set(yfilter)
	|| (features !=  nullptr && features->has_operation());
}

std::string Ltrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ascii-ltrace-oper:ltrace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ltrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ltrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "features")
    {
        if(features == nullptr)
        {
            features = std::make_shared<Ltrace::Features>();
        }
        return features;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ltrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(features != nullptr)
    {
        _children["features"] = features;
    }

    return _children;
}

void Ltrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ltrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ltrace::clone_ptr() const
{
    return std::make_shared<Ltrace>();
}

std::string Ltrace::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ltrace::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ltrace::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ltrace::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ltrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "features")
        return true;
    return false;
}

Ltrace::Features::Features()
    :
    feature(this, {})
{

    yang_name = "features"; yang_parent_name = "ltrace"; is_top_level_class = false; has_list_ancestor = false; 
}

Ltrace::Features::~Features()
{
}

bool Ltrace::Features::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return false;
}

bool Ltrace::Features::has_operation() const
{
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ltrace::Features::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ascii-ltrace-oper:ltrace/" << get_segment_path();
    return path_buffer.str();
}

std::string Ltrace::Features::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ltrace::Features::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ltrace::Features::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        auto ent_ = std::make_shared<Ltrace::Features::Feature>();
        ent_->parent = this;
        feature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ltrace::Features::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : feature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ltrace::Features::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ltrace::Features::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ltrace::Features::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature")
        return true;
    return false;
}

Ltrace::Features::Feature::Feature()
    :
    feature_name{YType::str, "feature-name"},
    trace_buf{YType::str, "trace-buf"}
        ,
    traces(std::make_shared<Ltrace::Features::Feature::Traces>())
{
    traces->parent = this;

    yang_name = "feature"; yang_parent_name = "features"; is_top_level_class = false; has_list_ancestor = false; 
}

Ltrace::Features::Feature::~Feature()
{
}

bool Ltrace::Features::Feature::has_data() const
{
    if (is_presence_container) return true;
    return feature_name.is_set
	|| trace_buf.is_set
	|| (traces !=  nullptr && traces->has_data());
}

bool Ltrace::Features::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(trace_buf.yfilter)
	|| (traces !=  nullptr && traces->has_operation());
}

std::string Ltrace::Features::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ascii-ltrace-oper:ltrace/features/" << get_segment_path();
    return path_buffer.str();
}

std::string Ltrace::Features::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ltrace::Features::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (trace_buf.is_set || is_set(trace_buf.yfilter)) leaf_name_data.push_back(trace_buf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ltrace::Features::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traces")
    {
        if(traces == nullptr)
        {
            traces = std::make_shared<Ltrace::Features::Feature::Traces>();
        }
        return traces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ltrace::Features::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traces != nullptr)
    {
        _children["traces"] = traces;
    }

    return _children;
}

void Ltrace::Features::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trace-buf")
    {
        trace_buf = value;
        trace_buf.value_namespace = name_space;
        trace_buf.value_namespace_prefix = name_space_prefix;
    }
}

void Ltrace::Features::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "trace-buf")
    {
        trace_buf.yfilter = yfilter;
    }
}

bool Ltrace::Features::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traces" || name == "feature-name" || name == "trace-buf")
        return true;
    return false;
}

Ltrace::Features::Feature::Traces::Traces()
    :
    trace(this, {"ltrace_id"})
{

    yang_name = "traces"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false; 
}

Ltrace::Features::Feature::Traces::~Traces()
{
}

bool Ltrace::Features::Feature::Traces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Ltrace::Features::Feature::Traces::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ltrace::Features::Feature::Traces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ascii-ltrace-oper:ltrace/features/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Ltrace::Features::Feature::Traces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ltrace::Features::Feature::Traces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ltrace::Features::Feature::Traces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Ltrace::Features::Feature::Traces::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ltrace::Features::Feature::Traces::get_children() const
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

    return _children;
}

void Ltrace::Features::Feature::Traces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ltrace::Features::Feature::Traces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ltrace::Features::Feature::Traces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Ltrace::Features::Feature::Traces::Trace::Trace()
    :
    ltrace_id{YType::uint32, "ltrace-id"},
    timestamp{YType::str, "timestamp"},
    line{YType::str, "line"}
{

    yang_name = "trace"; yang_parent_name = "traces"; is_top_level_class = false; has_list_ancestor = false; 
}

Ltrace::Features::Feature::Traces::Trace::~Trace()
{
}

bool Ltrace::Features::Feature::Traces::Trace::has_data() const
{
    if (is_presence_container) return true;
    return ltrace_id.is_set
	|| timestamp.is_set
	|| line.is_set;
}

bool Ltrace::Features::Feature::Traces::Trace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ltrace_id.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Ltrace::Features::Feature::Traces::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ascii-ltrace-oper:ltrace/features/feature/traces/" << get_segment_path();
    return path_buffer.str();
}

std::string Ltrace::Features::Feature::Traces::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(ltrace_id, "ltrace-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ltrace::Features::Feature::Traces::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ltrace_id.is_set || is_set(ltrace_id.yfilter)) leaf_name_data.push_back(ltrace_id.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ltrace::Features::Feature::Traces::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ltrace::Features::Feature::Traces::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ltrace::Features::Feature::Traces::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ltrace-id")
    {
        ltrace_id = value;
        ltrace_id.value_namespace = name_space;
        ltrace_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Ltrace::Features::Feature::Traces::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ltrace-id")
    {
        ltrace_id.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Ltrace::Features::Feature::Traces::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ltrace-id" || name == "timestamp" || name == "line")
        return true;
    return false;
}


}
}

