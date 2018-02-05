
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>())
{
    application_resource->parent = this;

    yang_name = "mois"; yang_parent_name = "rewrite-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::~Mois()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_data() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-resource")
    {
        if(application_resource == nullptr)
        {
            application_resource = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>();
        }
        return application_resource;
    }

    if(child_yang_name == "moi-array")
    {
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray>();
        c->parent = this;
        moi_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_resource != nullptr)
    {
        children["application-resource"] = application_resource;
    }

    count = 0;
    for (auto const & c : moi_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-resource" || name == "moi-array")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::ApplicationResource()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-resource"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_data() const
{
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>())
{
    moi->parent = this;

    yang_name = "moi-array"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_data() const
{
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_operation() const
{
    return is_set(yfilter)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moi")
    {
        if(moi == nullptr)
        {
            moi = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>();
        }
        return moi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(moi != nullptr)
    {
        children["moi"] = moi;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
    	,
    pop_and_lookup_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>())
	,pop_and_lookup_tp(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>())
	,pop_and_lookup_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>())
	,ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>())
	,tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>())
	,pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>())
	,ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>())
	,pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>())
	,stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>())
	,stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>())
	,te_head_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>())
	,dmtc_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>())
{
    pop_and_lookup_ipv4->parent = this;
    pop_and_lookup_tp->parent = this;
    pop_and_lookup_ipv6->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    tev4_data->parent = this;
    pseudowire_data->parent = this;
    ip_sub_data->parent = this;
    pseudowire_head_end_data->parent = this;
    pw_list_data->parent = this;
    stackv4_data->parent = this;
    stackv6_data->parent = this;
    te_head_data->parent = this;
    dmtc_data->parent = this;

    yang_name = "moi"; yang_parent_name = "moi-array"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_data() const
{
    return moi_type.is_set
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_data())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_data())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (stackv4_data !=  nullptr && stackv4_data->has_data())
	|| (stackv6_data !=  nullptr && stackv6_data->has_data())
	|| (te_head_data !=  nullptr && te_head_data->has_data())
	|| (dmtc_data !=  nullptr && dmtc_data->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(moi_type.yfilter)
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_operation())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_operation())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (stackv4_data !=  nullptr && stackv4_data->has_operation())
	|| (stackv6_data !=  nullptr && stackv6_data->has_operation())
	|| (te_head_data !=  nullptr && te_head_data->has_operation())
	|| (dmtc_data !=  nullptr && dmtc_data->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.yfilter)) leaf_name_data.push_back(moi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 == nullptr)
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>();
        }
        return pop_and_lookup_ipv4;
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp == nullptr)
        {
            pop_and_lookup_tp = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>();
        }
        return pop_and_lookup_tp;
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 == nullptr)
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>();
        }
        return pop_and_lookup_ipv6;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data == nullptr)
        {
            stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>();
        }
        return stackv4_data;
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data == nullptr)
        {
            stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>();
        }
        return stackv6_data;
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data == nullptr)
        {
            te_head_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>();
        }
        return te_head_data;
    }

    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data == nullptr)
        {
            dmtc_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>();
        }
        return dmtc_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pop_and_lookup_ipv4 != nullptr)
    {
        children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
    }

    if(pop_and_lookup_tp != nullptr)
    {
        children["pop-and-lookup-tp"] = pop_and_lookup_tp;
    }

    if(pop_and_lookup_ipv6 != nullptr)
    {
        children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
    }

    if(ipv4_data != nullptr)
    {
        children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        children["ipv6-data"] = ipv6_data;
    }

    if(tev4_data != nullptr)
    {
        children["tev4-data"] = tev4_data;
    }

    if(pseudowire_data != nullptr)
    {
        children["pseudowire-data"] = pseudowire_data;
    }

    if(ip_sub_data != nullptr)
    {
        children["ip-sub-data"] = ip_sub_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(pw_list_data != nullptr)
    {
        children["pw-list-data"] = pw_list_data;
    }

    if(stackv4_data != nullptr)
    {
        children["stackv4-data"] = stackv4_data;
    }

    if(stackv6_data != nullptr)
    {
        children["stackv6-data"] = stackv6_data;
    }

    if(te_head_data != nullptr)
    {
        children["te-head-data"] = te_head_data;
    }

    if(dmtc_data != nullptr)
    {
        children["dmtc-data"] = dmtc_data;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
        moi_type.value_namespace = name_space;
        moi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moi-type")
    {
        moi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop-and-lookup-ipv4" || name == "pop-and-lookup-tp" || name == "pop-and-lookup-ipv6" || name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "pseudowire-data" || name == "ip-sub-data" || name == "pseudowire-head-end-data" || name == "pw-list-data" || name == "stackv4-data" || name == "stackv6-data" || name == "te-head-data" || name == "dmtc-data" || name == "moi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::PopAndLookupIpv6()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv6"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::~PopAndLookupIpv6()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    load_metric{YType::uint32, "load-metric"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    tunnel_id{YType::uint16, "tunnel-id"},
    next_hop_id{YType::uint32, "next-hop-id"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| ipv4_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| load_metric.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| tunnel_id.is_set
	|| next_hop_id.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    next_hop_id{YType::uint32, "next-hop-id"}
{

    yang_name = "ipv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv6_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| next_hop_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(next_hop_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "next-hop-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::Tev4Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    backup_interface{YType::str, "backup-interface"},
    backup_ipv4_next_hop{YType::str, "backup-ipv4-next-hop"},
    merge_point_label{YType::uint32, "merge-point-label"},
    backup_local_label{YType::uint32, "backup-local-label"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_weight{YType::uint32, "tunnel-weight"},
    data_out_parent_interface{YType::str, "data-out-parent-interface"},
    tunnel_class{YType::uint32, "tunnel-class"}
{

    yang_name = "tev4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv4_next_hop.is_set
	|| backup_interface.is_set
	|| backup_ipv4_next_hop.is_set
	|| merge_point_label.is_set
	|| backup_local_label.is_set
	|| tunnel_interface.is_set
	|| tunnel_weight.is_set
	|| data_out_parent_interface.is_set
	|| tunnel_class.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_ipv4_next_hop.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(backup_local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tunnel_weight.yfilter)
	|| ydk::is_set(data_out_parent_interface.yfilter)
	|| ydk::is_set(tunnel_class.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_ipv4_next_hop.is_set || is_set(backup_ipv4_next_hop.yfilter)) leaf_name_data.push_back(backup_ipv4_next_hop.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (backup_local_label.is_set || is_set(backup_local_label.yfilter)) leaf_name_data.push_back(backup_local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_weight.is_set || is_set(tunnel_weight.yfilter)) leaf_name_data.push_back(tunnel_weight.get_name_leafdata());
    if (data_out_parent_interface.is_set || is_set(data_out_parent_interface.yfilter)) leaf_name_data.push_back(data_out_parent_interface.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.yfilter)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop = value;
        backup_ipv4_next_hop.value_namespace = name_space;
        backup_ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label = value;
        backup_local_label.value_namespace = name_space;
        backup_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight = value;
        tunnel_weight.value_namespace = name_space;
        tunnel_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface = value;
        data_out_parent_interface.value_namespace = name_space;
        data_out_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
        tunnel_class.value_namespace = name_space;
        tunnel_class.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight.yfilter = yfilter;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv4-next-hop" || name == "backup-interface" || name == "backup-ipv4-next-hop" || name == "merge-point-label" || name == "backup-local-label" || name == "tunnel-interface" || name == "tunnel-weight" || name == "data-out-parent-interface" || name == "tunnel-class")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::PseudowireData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    pseuodo_wire_connect_id{YType::uint32, "pseuodo-wire-connect-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    bridge_id{YType::uint32, "bridge-id"},
    split_horizon_id{YType::uint32, "split-horizon-id"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| cross_connect_id.is_set
	|| pseuodo_wire_connect_id.is_set
	|| ipv4_next_hop.is_set
	|| bridge_id.is_set
	|| split_horizon_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(pseuodo_wire_connect_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(split_horizon_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (pseuodo_wire_connect_id.is_set || is_set(pseuodo_wire_connect_id.yfilter)) leaf_name_data.push_back(pseuodo_wire_connect_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (split_horizon_id.is_set || is_set(split_horizon_id.yfilter)) leaf_name_data.push_back(split_horizon_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id = value;
        pseuodo_wire_connect_id.value_namespace = name_space;
        pseuodo_wire_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id = value;
        split_horizon_id.value_namespace = name_space;
        split_horizon_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "cross-connect-id" || name == "pseuodo-wire-connect-id" || name == "ipv4-next-hop" || name == "bridge-id" || name == "split-horizon-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| out_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "out-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    control_word{YType::int32, "control-word"},
    imposition{YType::int32, "imposition"},
    vctype{YType::uint8, "vctype"},
    pw_list_id{YType::uint16, "pw-list-id"},
    pwhe_interface{YType::str, "pwhe-interface"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| ipv4_next_hop.is_set
	|| control_word.is_set
	|| imposition.is_set
	|| vctype.is_set
	|| pw_list_id.is_set
	|| pwhe_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(imposition.yfilter)
	|| ydk::is_set(vctype.yfilter)
	|| ydk::is_set(pw_list_id.yfilter)
	|| ydk::is_set(pwhe_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (imposition.is_set || is_set(imposition.yfilter)) leaf_name_data.push_back(imposition.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.yfilter)) leaf_name_data.push_back(vctype.get_name_leafdata());
    if (pw_list_id.is_set || is_set(pw_list_id.yfilter)) leaf_name_data.push_back(pw_list_id.get_name_leafdata());
    if (pwhe_interface.is_set || is_set(pwhe_interface.yfilter)) leaf_name_data.push_back(pwhe_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposition")
    {
        imposition = value;
        imposition.value_namespace = name_space;
        imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vctype")
    {
        vctype = value;
        vctype.value_namespace = name_space;
        vctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id = value;
        pw_list_id.value_namespace = name_space;
        pw_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface = value;
        pwhe_interface.value_namespace = name_space;
        pwhe_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "imposition")
    {
        imposition.yfilter = yfilter;
    }
    if(value_path == "vctype")
    {
        vctype.yfilter = yfilter;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id.yfilter = yfilter;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "ipv4-next-hop" || name == "control-word" || name == "imposition" || name == "vctype" || name == "pw-list-id" || name == "pwhe-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    l3_interface{YType::str, "l3-interface"},
    l2_interface{YType::str, "l2-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pw-list-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| l3_interface.is_set
	|| l2_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(l3_interface.yfilter)
	|| ydk::is_set(l2_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (l3_interface.is_set || is_set(l3_interface.yfilter)) leaf_name_data.push_back(l3_interface.get_name_leafdata());
    if (l2_interface.is_set || is_set(l2_interface.yfilter)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-interface")
    {
        l3_interface = value;
        l3_interface.value_namespace = name_space;
        l3_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-interface")
    {
        l2_interface = value;
        l2_interface.value_namespace = name_space;
        l2_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "l3-interface")
    {
        l3_interface.yfilter = yfilter;
    }
    if(value_path == "l2-interface")
    {
        l2_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "l3-interface" || name == "l2-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
    	,
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
	,inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    return owner_application_type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    load_metric{YType::uint32, "load-metric"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    tunnel_id{YType::uint16, "tunnel-id"},
    next_hop_id{YType::uint32, "next-hop-id"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| ipv4_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| load_metric.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| tunnel_id.is_set
	|| next_hop_id.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"},
    nexthop{YType::str, "nexthop"}
{

    yang_name = "inner-stack"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter)
	|| ydk::is_set(nexthop.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "num-nexthops" || name == "num-lbls" || name == "nexthop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
	,inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    next_hop_id{YType::uint32, "next-hop-id"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv6_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| next_hop_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(next_hop_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "next-hop-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"},
    nexthop{YType::str, "nexthop"}
{

    yang_name = "inner-stack"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter)
	|| ydk::is_set(nexthop.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "num-nexthops" || name == "num-lbls" || name == "nexthop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_local_label_str{YType::str, "tunnel-local-label-str"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_load_metric{YType::uint32, "tunnel-load-metric"},
    flags_decode{YType::str, "flags-decode"}
{

    yang_name = "te-head-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_data() const
{
    return table_id.is_set
	|| table_name.is_set
	|| tunnel_local_label.is_set
	|| tunnel_local_label_str.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_local_label_str.yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_local_label_str.is_set || is_set(tunnel_local_label_str.yfilter)) leaf_name_data.push_back(tunnel_local_label_str.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (flags_decode.is_set || is_set(flags_decode.yfilter)) leaf_name_data.push_back(flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
        tunnel_local_label.value_namespace = name_space;
        tunnel_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str = value;
        tunnel_local_label_str.value_namespace = name_space;
        tunnel_local_label_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
        tunnel_fwd_class.value_namespace = name_space;
        tunnel_fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
        tunnel_load_metric.value_namespace = name_space;
        tunnel_load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags-decode")
    {
        flags_decode = value;
        flags_decode.value_namespace = name_space;
        flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str.yfilter = yfilter;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "flags-decode")
    {
        flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "tunnel-local-label" || name == "tunnel-local-label-str" || name == "tunnel-fwd-class" || name == "tunnel-load-metric" || name == "flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::RewriteSummary::RewriteSummary()
    :
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_tefpi{YType::uint32, "num-tefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_paths{YType::uint32, "total-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::~RewriteSummary()
{
}

bool MplsLsd::RewriteSummary::has_data() const
{
    return num_label_fpi.is_set
	|| num_tefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_dmtctefpi.is_set
	|| num_rewrite.is_set
	|| total_forward_update.is_set
	|| total_forwad_update_message.is_set
	|| total_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| total_pw_paths.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| total_dmtc_intf.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsd::RewriteSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsd::RewriteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
        num_ipv4fpi.value_namespace = name_space;
        num_ipv4fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
        num_ipv6fpi.value_namespace = name_space;
        num_ipv6fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
        total_t_ev4_paths.value_namespace = name_space;
        total_t_ev4_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
        total_te_head_paths.value_namespace = name_space;
        total_te_head_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
        total_ip_sub_paths.value_namespace = name_space;
        total_ip_sub_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
        total_ipv4rpf_neighbors.value_namespace = name_space;
        total_ipv4rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
        total_ipv6rpf_neighbors.value_namespace = name_space;
        total_ipv6rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths.yfilter = yfilter;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "num-label-fpi" || name == "num-tefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-pw-list-tefpi" || name == "num-dmtctefpi" || name == "num-rewrite" || name == "total-forward-update" || name == "total-forwad-update-message" || name == "total-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "total-pw-paths" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "num-rewrite-rpf-neighbors" || name == "total-dmtc-intf" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_data() const
{
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
}

std::string MplsLsd::RewriteSummary::Ipv4Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_data() const
{
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
}

std::string MplsLsd::RewriteSummary::Ipv6Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::Applications::Applications()
{

    yang_name = "applications"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Applications::~Applications()
{
}

bool MplsLsd::Applications::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Applications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<MplsLsd::Applications::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Applications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Applications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Applications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application")
        return true;
    return false;
}

MplsLsd::Applications::Application::Application()
    :
    application_name{YType::str, "application-name"},
    application_name_xr{YType::str, "application-name-xr"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    app_reg_time{YType::uint64, "app-reg-time"},
    app_disconnect_time{YType::uint64, "app-disconnect-time"},
    app_flow_controlled{YType::int32, "app-flow-controlled"},
    flow_ctrl_time{YType::uint64, "flow-ctrl-time"},
    flow_ctrl_clr_time{YType::uint64, "flow-ctrl-clr-time"},
    go_act_ts{YType::uint64, "go-act-ts"},
    application_state{YType::enumeration, "application-state"},
    recovery_time_remaining_seconds{YType::uint32, "recovery-time-remaining-seconds"},
    recovery_time_elapsed_seconds{YType::uint32, "recovery-time-elapsed-seconds"},
    recovery_time_register_seconds{YType::uint32, "recovery-time-register-seconds"},
    node_id{YType::str, "node-id"}
    	,
    application_statistics(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>())
{
    application_statistics->parent = this;

    yang_name = "application"; yang_parent_name = "applications"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Applications::Application::~Application()
{
}

bool MplsLsd::Applications::Application::has_data() const
{
    return application_name.is_set
	|| application_name_xr.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| app_reg_time.is_set
	|| app_disconnect_time.is_set
	|| app_flow_controlled.is_set
	|| flow_ctrl_time.is_set
	|| flow_ctrl_clr_time.is_set
	|| go_act_ts.is_set
	|| application_state.is_set
	|| recovery_time_remaining_seconds.is_set
	|| recovery_time_elapsed_seconds.is_set
	|| recovery_time_register_seconds.is_set
	|| node_id.is_set
	|| (application_statistics !=  nullptr && application_statistics->has_data());
}

bool MplsLsd::Applications::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_name_xr.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(app_reg_time.yfilter)
	|| ydk::is_set(app_disconnect_time.yfilter)
	|| ydk::is_set(app_flow_controlled.yfilter)
	|| ydk::is_set(flow_ctrl_time.yfilter)
	|| ydk::is_set(flow_ctrl_clr_time.yfilter)
	|| ydk::is_set(go_act_ts.yfilter)
	|| ydk::is_set(application_state.yfilter)
	|| ydk::is_set(recovery_time_remaining_seconds.yfilter)
	|| ydk::is_set(recovery_time_elapsed_seconds.yfilter)
	|| ydk::is_set(recovery_time_register_seconds.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (application_statistics !=  nullptr && application_statistics->has_operation());
}

std::string MplsLsd::Applications::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/applications/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[application-name='" <<application_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_name_xr.is_set || is_set(application_name_xr.yfilter)) leaf_name_data.push_back(application_name_xr.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (app_reg_time.is_set || is_set(app_reg_time.yfilter)) leaf_name_data.push_back(app_reg_time.get_name_leafdata());
    if (app_disconnect_time.is_set || is_set(app_disconnect_time.yfilter)) leaf_name_data.push_back(app_disconnect_time.get_name_leafdata());
    if (app_flow_controlled.is_set || is_set(app_flow_controlled.yfilter)) leaf_name_data.push_back(app_flow_controlled.get_name_leafdata());
    if (flow_ctrl_time.is_set || is_set(flow_ctrl_time.yfilter)) leaf_name_data.push_back(flow_ctrl_time.get_name_leafdata());
    if (flow_ctrl_clr_time.is_set || is_set(flow_ctrl_clr_time.yfilter)) leaf_name_data.push_back(flow_ctrl_clr_time.get_name_leafdata());
    if (go_act_ts.is_set || is_set(go_act_ts.yfilter)) leaf_name_data.push_back(go_act_ts.get_name_leafdata());
    if (application_state.is_set || is_set(application_state.yfilter)) leaf_name_data.push_back(application_state.get_name_leafdata());
    if (recovery_time_remaining_seconds.is_set || is_set(recovery_time_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_time_remaining_seconds.get_name_leafdata());
    if (recovery_time_elapsed_seconds.is_set || is_set(recovery_time_elapsed_seconds.yfilter)) leaf_name_data.push_back(recovery_time_elapsed_seconds.get_name_leafdata());
    if (recovery_time_register_seconds.is_set || is_set(recovery_time_register_seconds.yfilter)) leaf_name_data.push_back(recovery_time_register_seconds.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-statistics")
    {
        if(application_statistics == nullptr)
        {
            application_statistics = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>();
        }
        return application_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_statistics != nullptr)
    {
        children["application-statistics"] = application_statistics;
    }

    return children;
}

void MplsLsd::Applications::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr = value;
        application_name_xr.value_namespace = name_space;
        application_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-reg-time")
    {
        app_reg_time = value;
        app_reg_time.value_namespace = name_space;
        app_reg_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time = value;
        app_disconnect_time.value_namespace = name_space;
        app_disconnect_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled = value;
        app_flow_controlled.value_namespace = name_space;
        app_flow_controlled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time = value;
        flow_ctrl_time.value_namespace = name_space;
        flow_ctrl_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time = value;
        flow_ctrl_clr_time.value_namespace = name_space;
        flow_ctrl_clr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts = value;
        go_act_ts.value_namespace = name_space;
        go_act_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-state")
    {
        application_state = value;
        application_state.value_namespace = name_space;
        application_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds = value;
        recovery_time_remaining_seconds.value_namespace = name_space;
        recovery_time_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds = value;
        recovery_time_elapsed_seconds.value_namespace = name_space;
        recovery_time_elapsed_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds = value;
        recovery_time_register_seconds.value_namespace = name_space;
        recovery_time_register_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "app-reg-time")
    {
        app_reg_time.yfilter = yfilter;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time.yfilter = yfilter;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time.yfilter = yfilter;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts.yfilter = yfilter;
    }
    if(value_path == "application-state")
    {
        application_state.yfilter = yfilter;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-statistics" || name == "application-name" || name == "application-name-xr" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "app-reg-time" || name == "app-disconnect-time" || name == "app-flow-controlled" || name == "flow-ctrl-time" || name == "flow-ctrl-clr-time" || name == "go-act-ts" || name == "application-state" || name == "recovery-time-remaining-seconds" || name == "recovery-time-elapsed-seconds" || name == "recovery-time-register-seconds" || name == "node-id")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::ApplicationStatistics()
    :
    interface_enable{YType::uint32, "interface-enable"},
    interface_enable_pending{YType::uint32, "interface-enable-pending"},
    connect_count{YType::uint32, "connect-count"},
    label_context_count{YType::uint32, "label-context-count"},
    label_context_pending_count{YType::uint32, "label-context-pending-count"}
    	,
    connected(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>())
{
    connected->parent = this;

    yang_name = "application-statistics"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Applications::Application::ApplicationStatistics::~ApplicationStatistics()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_data() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_enable.is_set
	|| interface_enable_pending.is_set
	|| connect_count.is_set
	|| (connected !=  nullptr && connected->has_data());
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_operation() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(interface_enable_pending.yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(label_context_count.yfilter)
	|| ydk::is_set(label_context_pending_count.yfilter)
	|| (connected !=  nullptr && connected->has_operation());
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (interface_enable_pending.is_set || is_set(interface_enable_pending.yfilter)) leaf_name_data.push_back(interface_enable_pending.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());

    auto label_context_count_name_datas = label_context_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_count_name_datas.begin(), label_context_count_name_datas.end());
    auto label_context_pending_count_name_datas = label_context_pending_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_pending_count_name_datas.begin(), label_context_pending_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::ApplicationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>();
        }
        return connected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::ApplicationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    return children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending = value;
        interface_enable_pending.value_namespace = name_space;
        interface_enable_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-context-count")
    {
        label_context_count.append(value);
    }
    if(value_path == "label-context-pending-count")
    {
        label_context_pending_count.append(value);
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending.yfilter = yfilter;
    }
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "label-context-count")
    {
        label_context_count.yfilter = yfilter;
    }
    if(value_path == "label-context-pending-count")
    {
        label_context_pending_count.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "interface-enable" || name == "interface-enable-pending" || name == "connect-count" || name == "label-context-count" || name == "label-context-pending-count")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::Connected()
    :
    rt_set_msg_count{YType::uint32, "rt-set-msg-count"},
    operation_msg_count{YType::uint32, "operation-msg-count"},
    oor_label_count{YType::uint32, "oor-label-count"},
    error_msg_count{YType::uint32, "error-msg-count"}
{

    yang_name = "connected"; yang_parent_name = "application-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::~Connected()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_data() const
{
    return rt_set_msg_count.is_set
	|| operation_msg_count.is_set
	|| oor_label_count.is_set
	|| error_msg_count.is_set;
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_set_msg_count.yfilter)
	|| ydk::is_set(operation_msg_count.yfilter)
	|| ydk::is_set(oor_label_count.yfilter)
	|| ydk::is_set(error_msg_count.yfilter);
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_set_msg_count.is_set || is_set(rt_set_msg_count.yfilter)) leaf_name_data.push_back(rt_set_msg_count.get_name_leafdata());
    if (operation_msg_count.is_set || is_set(operation_msg_count.yfilter)) leaf_name_data.push_back(operation_msg_count.get_name_leafdata());
    if (oor_label_count.is_set || is_set(oor_label_count.yfilter)) leaf_name_data.push_back(oor_label_count.get_name_leafdata());
    if (error_msg_count.is_set || is_set(error_msg_count.yfilter)) leaf_name_data.push_back(error_msg_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count = value;
        rt_set_msg_count.value_namespace = name_space;
        rt_set_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count = value;
        operation_msg_count.value_namespace = name_space;
        operation_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count = value;
        oor_label_count.value_namespace = name_space;
        oor_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-msg-count")
    {
        error_msg_count = value;
        error_msg_count.value_namespace = name_space;
        error_msg_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count.yfilter = yfilter;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count.yfilter = yfilter;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count.yfilter = yfilter;
    }
    if(value_path == "error-msg-count")
    {
        error_msg_count.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-set-msg-count" || name == "operation-msg-count" || name == "oor-label-count" || name == "error-msg-count")
        return true;
    return false;
}

MplsLsd::SrlbInconsistency::SrlbInconsistency()
    :
    start_srlb_range{YType::uint32, "start-srlb-range"},
    end_srlb_range{YType::uint32, "end-srlb-range"}
{

    yang_name = "srlb-inconsistency"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::SrlbInconsistency::~SrlbInconsistency()
{
}

bool MplsLsd::SrlbInconsistency::has_data() const
{
    return start_srlb_range.is_set
	|| end_srlb_range.is_set;
}

bool MplsLsd::SrlbInconsistency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_srlb_range.yfilter)
	|| ydk::is_set(end_srlb_range.yfilter);
}

std::string MplsLsd::SrlbInconsistency::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::SrlbInconsistency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb-inconsistency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::SrlbInconsistency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_srlb_range.is_set || is_set(start_srlb_range.yfilter)) leaf_name_data.push_back(start_srlb_range.get_name_leafdata());
    if (end_srlb_range.is_set || is_set(end_srlb_range.yfilter)) leaf_name_data.push_back(end_srlb_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::SrlbInconsistency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::SrlbInconsistency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::SrlbInconsistency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-srlb-range")
    {
        start_srlb_range = value;
        start_srlb_range.value_namespace = name_space;
        start_srlb_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-srlb-range")
    {
        end_srlb_range = value;
        end_srlb_range.value_namespace = name_space;
        end_srlb_range.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::SrlbInconsistency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-srlb-range")
    {
        start_srlb_range.yfilter = yfilter;
    }
    if(value_path == "end-srlb-range")
    {
        end_srlb_range.yfilter = yfilter;
    }
}

bool MplsLsd::SrlbInconsistency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-srlb-range" || name == "end-srlb-range")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrfs()
{

    yang_name = "label-summary-vrfs"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::LabelSummaryVrfs::~LabelSummaryVrfs()
{
}

bool MplsLsd::LabelSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::LabelSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-vrf")
    {
        auto c = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf>();
        c->parent = this;
        label_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : label_summary_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::LabelSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::LabelSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::LabelSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-summary-vrf")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::LabelSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    total_labels{YType::uint32, "total-labels"},
    rsi_connected{YType::int32, "rsi-connected"}
{

    yang_name = "label-summary-vrf"; yang_parent_name = "label-summary-vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::~LabelSummaryVrf()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_data() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| vrf_name_xr.is_set
	|| total_labels.is_set
	|| rsi_connected.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_operation() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(total_labels.yfilter)
	|| ydk::is_set(rsi_connected.yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/label-summary-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.yfilter)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.yfilter)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-count")
    {
        auto c = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount>();
        c->parent = this;
        owner_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : owner_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-labels")
    {
        total_labels = value;
        total_labels.value_namespace = name_space;
        total_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
        rsi_connected.value_namespace = name_space;
        rsi_connected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "total-labels")
    {
        total_labels.yfilter = yfilter;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected.yfilter = yfilter;
    }
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-count" || name == "vrf-name" || name == "vrf-name-xr" || name == "total-labels" || name == "rsi-connected")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::OwnerCount()
    :
    application_type{YType::enumeration, "application-type"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    number_of_labels{YType::uint32, "number-of-labels"}
{

    yang_name = "owner-count"; yang_parent_name = "label-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::~OwnerCount()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_data() const
{
    return application_type.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| number_of_labels.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(number_of_labels.yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.yfilter)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
        number_of_labels.value_namespace = name_space;
        number_of_labels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels.yfilter = yfilter;
    }
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-type" || name == "application-name" || name == "application-role-primary" || name == "application-instance" || name == "number-of-labels")
        return true;
    return false;
}

MplsLsd::LabelRange::LabelRange()
    :
    min_dynamic_label_value{YType::uint32, "min-dynamic-label-value"},
    max_dynamic_label_value{YType::uint32, "max-dynamic-label-value"},
    min_static_label_value{YType::uint32, "min-static-label-value"},
    max_static_label_value{YType::uint32, "max-static-label-value"}
{

    yang_name = "label-range"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::LabelRange::~LabelRange()
{
}

bool MplsLsd::LabelRange::has_data() const
{
    return min_dynamic_label_value.is_set
	|| max_dynamic_label_value.is_set
	|| min_static_label_value.is_set
	|| max_static_label_value.is_set;
}

bool MplsLsd::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_dynamic_label_value.yfilter)
	|| ydk::is_set(max_dynamic_label_value.yfilter)
	|| ydk::is_set(min_static_label_value.yfilter)
	|| ydk::is_set(max_static_label_value.yfilter);
}

std::string MplsLsd::LabelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_dynamic_label_value.is_set || is_set(min_dynamic_label_value.yfilter)) leaf_name_data.push_back(min_dynamic_label_value.get_name_leafdata());
    if (max_dynamic_label_value.is_set || is_set(max_dynamic_label_value.yfilter)) leaf_name_data.push_back(max_dynamic_label_value.get_name_leafdata());
    if (min_static_label_value.is_set || is_set(min_static_label_value.yfilter)) leaf_name_data.push_back(min_static_label_value.get_name_leafdata());
    if (max_static_label_value.is_set || is_set(max_static_label_value.yfilter)) leaf_name_data.push_back(max_static_label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value = value;
        min_dynamic_label_value.value_namespace = name_space;
        min_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value = value;
        max_dynamic_label_value.value_namespace = name_space;
        max_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value = value;
        min_static_label_value.value_namespace = name_space;
        min_static_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value = value;
        max_static_label_value.value_namespace = name_space;
        max_static_label_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value.yfilter = yfilter;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value.yfilter = yfilter;
    }
}

bool MplsLsd::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-dynamic-label-value" || name == "max-dynamic-label-value" || name == "min-static-label-value" || name == "max-static-label-value")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrfs()
{

    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsd::RewriteSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-summary-vrf")
    {
        auto c = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf>();
        c->parent = this;
        rewrite_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rewrite_summary_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::RewriteSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::RewriteSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::RewriteSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-summary-vrf")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::RewriteSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_tefpi{YType::uint32, "num-tefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_paths{YType::uint32, "total-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary-vrf"; yang_parent_name = "rewrite-summary-vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::~RewriteSummaryVrf()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_data() const
{
    return vrf_name.is_set
	|| num_label_fpi.is_set
	|| num_tefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_dmtctefpi.is_set
	|| num_rewrite.is_set
	|| total_forward_update.is_set
	|| total_forwad_update_message.is_set
	|| total_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| total_pw_paths.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| total_dmtc_intf.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
        num_ipv4fpi.value_namespace = name_space;
        num_ipv4fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
        num_ipv6fpi.value_namespace = name_space;
        num_ipv6fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
        total_t_ev4_paths.value_namespace = name_space;
        total_t_ev4_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
        total_te_head_paths.value_namespace = name_space;
        total_te_head_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
        total_ip_sub_paths.value_namespace = name_space;
        total_ip_sub_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
        total_ipv4rpf_neighbors.value_namespace = name_space;
        total_ipv4rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
        total_ipv6rpf_neighbors.value_namespace = name_space;
        total_ipv6rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths.yfilter = yfilter;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "vrf-name" || name == "num-label-fpi" || name == "num-tefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-pw-list-tefpi" || name == "num-dmtctefpi" || name == "num-rewrite" || name == "total-forward-update" || name == "total-forwad-update-message" || name == "total-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "total-pw-paths" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "num-rewrite-rpf-neighbors" || name == "total-dmtc-intf" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Interfaces::~Interfaces()
{
}

bool MplsLsd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MplsLsd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLsd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_state{YType::enumeration, "interface-state"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Interfaces::Interface::~Interface()
{
}

bool MplsLsd::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_state.is_set;
}

bool MplsLsd::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_state.yfilter);
}

std::string MplsLsd::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        auto c = std::make_shared<MplsLsd::Interfaces::Interface::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_owner)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
}

bool MplsLsd::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "interface-name" || name == "interface" || name == "interface-state")
        return true;
    return false;
}

MplsLsd::Interfaces::Interface::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Interfaces::Interface::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_data() const
{
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Interfaces::Interface::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::Interface::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Interfaces::Interface::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Interfaces::Interface::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Interfaces::Interface::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Interfaces::Interface::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}


}
}

