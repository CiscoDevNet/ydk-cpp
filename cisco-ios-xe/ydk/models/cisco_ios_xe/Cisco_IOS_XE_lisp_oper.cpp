
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_lisp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_lisp_oper {

LispState::LispState()
{

    yang_name = "lisp-state"; yang_parent_name = "Cisco-IOS-XE-lisp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LispState::~LispState()
{
}

bool LispState::has_data() const
{
    for (std::size_t index=0; index<lisp_routers.size(); index++)
    {
        if(lisp_routers[index]->has_data())
            return true;
    }
    return false;
}

bool LispState::has_operation() const
{
    for (std::size_t index=0; index<lisp_routers.size(); index++)
    {
        if(lisp_routers[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LispState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp-oper:lisp-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-routers")
    {
        for(auto const & c : lisp_routers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LispState::LispRouters>();
        c->parent = this;
        lisp_routers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lisp_routers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LispState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LispState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LispState::clone_ptr() const
{
    return std::make_shared<LispState>();
}

std::string LispState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LispState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LispState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LispState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LispState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-routers")
        return true;
    return false;
}

LispState::LispRouters::LispRouters()
    :
    top_id{YType::uint32, "top-id"},
    site_id{YType::uint64, "site-id"},
    xtr_id{YType::uint8, "xtr-id"}
{

    yang_name = "lisp-routers"; yang_parent_name = "lisp-state"; is_top_level_class = false; has_list_ancestor = false;
}

LispState::LispRouters::~LispRouters()
{
}

bool LispState::LispRouters::has_data() const
{
    for (std::size_t index=0; index<instances.size(); index++)
    {
        if(instances[index]->has_data())
            return true;
    }
    for (auto const & leaf : xtr_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return top_id.is_set
	|| site_id.is_set;
}

bool LispState::LispRouters::has_operation() const
{
    for (std::size_t index=0; index<instances.size(); index++)
    {
        if(instances[index]->has_operation())
            return true;
    }
    for (auto const & leaf : xtr_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(top_id.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| ydk::is_set(xtr_id.yfilter);
}

std::string LispState::LispRouters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp-oper:lisp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string LispState::LispRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routers" <<"[top-id='" <<top_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (top_id.is_set || is_set(top_id.yfilter)) leaf_name_data.push_back(top_id.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    auto xtr_id_name_datas = xtr_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xtr_id_name_datas.begin(), xtr_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        for(auto const & c : instances)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LispState::LispRouters::Instances>();
        c->parent = this;
        instances.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instances)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LispState::LispRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "top-id")
    {
        top_id = value;
        top_id.value_namespace = name_space;
        top_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xtr-id")
    {
        xtr_id.append(value);
    }
}

void LispState::LispRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "top-id")
    {
        top_id.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
    if(value_path == "xtr-id")
    {
        xtr_id.yfilter = yfilter;
    }
}

bool LispState::LispRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances" || name == "top-id" || name == "site-id" || name == "xtr-id")
        return true;
    return false;
}

LispState::LispRouters::Instances::Instances()
    :
    iid{YType::uint32, "iid"}
{

    yang_name = "instances"; yang_parent_name = "lisp-routers"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::~Instances()
{
}

bool LispState::LispRouters::Instances::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return iid.is_set;
}

bool LispState::LispRouters::Instances::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iid.yfilter);
}

std::string LispState::LispRouters::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances" <<"[iid='" <<iid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iid.is_set || is_set(iid.yfilter)) leaf_name_data.push_back(iid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LispState::LispRouters::Instances::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LispState::LispRouters::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iid")
    {
        iid = value;
        iid.value_namespace = name_space;
        iid.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iid")
    {
        iid.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "iid")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::Af()
    :
    iaftype{YType::enumeration, "iaftype"}
    	,
    role(std::make_shared<LispState::LispRouters::Instances::Af::Role>())
{
    role->parent = this;

    yang_name = "af"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::Af::~Af()
{
}

bool LispState::LispRouters::Instances::Af::has_data() const
{
    for (std::size_t index=0; index<map_cache.size(); index++)
    {
        if(map_cache[index]->has_data())
            return true;
    }
    return iaftype.is_set
	|| (role !=  nullptr && role->has_data());
}

bool LispState::LispRouters::Instances::Af::has_operation() const
{
    for (std::size_t index=0; index<map_cache.size(); index++)
    {
        if(map_cache[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iaftype.yfilter)
	|| (role !=  nullptr && role->has_operation());
}

std::string LispState::LispRouters::Instances::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[iaftype='" <<iaftype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iaftype.is_set || is_set(iaftype.yfilter)) leaf_name_data.push_back(iaftype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role")
    {
        if(role == nullptr)
        {
            role = std::make_shared<LispState::LispRouters::Instances::Af::Role>();
        }
        return role;
    }

    if(child_yang_name == "map-cache")
    {
        for(auto const & c : map_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LispState::LispRouters::Instances::Af::MapCache>();
        c->parent = this;
        map_cache.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(role != nullptr)
    {
        children["role"] = role;
    }

    for (auto const & c : map_cache)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LispState::LispRouters::Instances::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iaftype")
    {
        iaftype = value;
        iaftype.value_namespace = name_space;
        iaftype.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iaftype")
    {
        iaftype.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role" || name == "map-cache" || name == "iaftype")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::Role::Role()
    :
    is_ms{YType::boolean, "is-ms"},
    is_mr{YType::boolean, "is-mr"},
    is_itr{YType::boolean, "is-itr"},
    is_etr{YType::boolean, "is-etr"},
    is_pitr{YType::boolean, "is-pitr"},
    is_petr{YType::boolean, "is-petr"}
{

    yang_name = "role"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::Af::Role::~Role()
{
}

bool LispState::LispRouters::Instances::Af::Role::has_data() const
{
    return is_ms.is_set
	|| is_mr.is_set
	|| is_itr.is_set
	|| is_etr.is_set
	|| is_pitr.is_set
	|| is_petr.is_set;
}

bool LispState::LispRouters::Instances::Af::Role::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ms.yfilter)
	|| ydk::is_set(is_mr.yfilter)
	|| ydk::is_set(is_itr.yfilter)
	|| ydk::is_set(is_etr.yfilter)
	|| ydk::is_set(is_pitr.yfilter)
	|| ydk::is_set(is_petr.yfilter);
}

std::string LispState::LispRouters::Instances::Af::Role::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::Role::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ms.is_set || is_set(is_ms.yfilter)) leaf_name_data.push_back(is_ms.get_name_leafdata());
    if (is_mr.is_set || is_set(is_mr.yfilter)) leaf_name_data.push_back(is_mr.get_name_leafdata());
    if (is_itr.is_set || is_set(is_itr.yfilter)) leaf_name_data.push_back(is_itr.get_name_leafdata());
    if (is_etr.is_set || is_set(is_etr.yfilter)) leaf_name_data.push_back(is_etr.get_name_leafdata());
    if (is_pitr.is_set || is_set(is_pitr.yfilter)) leaf_name_data.push_back(is_pitr.get_name_leafdata());
    if (is_petr.is_set || is_set(is_petr.yfilter)) leaf_name_data.push_back(is_petr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::Af::Role::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::Af::Role::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LispState::LispRouters::Instances::Af::Role::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ms")
    {
        is_ms = value;
        is_ms.value_namespace = name_space;
        is_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mr")
    {
        is_mr = value;
        is_mr.value_namespace = name_space;
        is_mr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-itr")
    {
        is_itr = value;
        is_itr.value_namespace = name_space;
        is_itr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-etr")
    {
        is_etr = value;
        is_etr.value_namespace = name_space;
        is_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pitr")
    {
        is_pitr = value;
        is_pitr.value_namespace = name_space;
        is_pitr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-petr")
    {
        is_petr = value;
        is_petr.value_namespace = name_space;
        is_petr.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::Role::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ms")
    {
        is_ms.yfilter = yfilter;
    }
    if(value_path == "is-mr")
    {
        is_mr.yfilter = yfilter;
    }
    if(value_path == "is-itr")
    {
        is_itr.yfilter = yfilter;
    }
    if(value_path == "is-etr")
    {
        is_etr.yfilter = yfilter;
    }
    if(value_path == "is-pitr")
    {
        is_pitr.yfilter = yfilter;
    }
    if(value_path == "is-petr")
    {
        is_petr.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::Role::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ms" || name == "is-mr" || name == "is-itr" || name == "is-etr" || name == "is-pitr" || name == "is-petr")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::MapCache()
    :
    afi{YType::enumeration, "afi"},
    prefix{YType::str, "prefix"},
    up_time{YType::str, "up-time"},
    last_modified_time{YType::str, "last-modified-time"},
    last_update_time{YType::str, "last-update-time"},
    ttl{YType::uint32, "ttl"},
    is_authoritative{YType::boolean, "is-authoritative"},
    is_static{YType::boolean, "is-static"},
    is_negative{YType::boolean, "is-negative"},
    nmr_action{YType::enumeration, "nmr-action"}
{

    yang_name = "map-cache"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::Af::MapCache::~MapCache()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::has_data() const
{
    for (std::size_t index=0; index<rloc.size(); index++)
    {
        if(rloc[index]->has_data())
            return true;
    }
    return afi.is_set
	|| prefix.is_set
	|| up_time.is_set
	|| last_modified_time.is_set
	|| last_update_time.is_set
	|| ttl.is_set
	|| is_authoritative.is_set
	|| is_static.is_set
	|| is_negative.is_set
	|| nmr_action.is_set;
}

bool LispState::LispRouters::Instances::Af::MapCache::has_operation() const
{
    for (std::size_t index=0; index<rloc.size(); index++)
    {
        if(rloc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(last_modified_time.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(is_authoritative.yfilter)
	|| ydk::is_set(is_static.yfilter)
	|| ydk::is_set(is_negative.yfilter)
	|| ydk::is_set(nmr_action.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache" <<"[afi='" <<afi <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (last_modified_time.is_set || is_set(last_modified_time.yfilter)) leaf_name_data.push_back(last_modified_time.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (is_authoritative.is_set || is_set(is_authoritative.yfilter)) leaf_name_data.push_back(is_authoritative.get_name_leafdata());
    if (is_static.is_set || is_set(is_static.yfilter)) leaf_name_data.push_back(is_static.get_name_leafdata());
    if (is_negative.is_set || is_set(is_negative.yfilter)) leaf_name_data.push_back(is_negative.get_name_leafdata());
    if (nmr_action.is_set || is_set(nmr_action.yfilter)) leaf_name_data.push_back(nmr_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::Af::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        for(auto const & c : rloc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LispState::LispRouters::Instances::Af::MapCache::Rloc>();
        c->parent = this;
        rloc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::Af::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rloc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LispState::LispRouters::Instances::Af::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time = value;
        last_modified_time.value_namespace = name_space;
        last_modified_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authoritative")
    {
        is_authoritative = value;
        is_authoritative.value_namespace = name_space;
        is_authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-static")
    {
        is_static = value;
        is_static.value_namespace = name_space;
        is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-negative")
    {
        is_negative = value;
        is_negative.value_namespace = name_space;
        is_negative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nmr-action")
    {
        nmr_action = value;
        nmr_action.value_namespace = name_space;
        nmr_action.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "is-authoritative")
    {
        is_authoritative.yfilter = yfilter;
    }
    if(value_path == "is-static")
    {
        is_static.yfilter = yfilter;
    }
    if(value_path == "is-negative")
    {
        is_negative.yfilter = yfilter;
    }
    if(value_path == "nmr-action")
    {
        nmr_action.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "afi" || name == "prefix" || name == "up-time" || name == "last-modified-time" || name == "last-update-time" || name == "ttl" || name == "is-authoritative" || name == "is-static" || name == "is-negative" || name == "nmr-action")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::Rloc::Rloc()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"}
    	,
    params(std::make_shared<LispState::LispRouters::Instances::Af::MapCache::Rloc::Params>())
{
    params->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::Af::MapCache::Rloc::~Rloc()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::has_data() const
{
    return afi.is_set
	|| address.is_set
	|| (params !=  nullptr && params->has_data());
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| (params !=  nullptr && params->has_operation());
}

std::string LispState::LispRouters::Instances::Af::MapCache::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc" <<"[afi='" <<afi <<"']" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::Af::MapCache::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params")
    {
        if(params == nullptr)
        {
            params = std::make_shared<LispState::LispRouters::Instances::Af::MapCache::Rloc::Params>();
        }
        return params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::Af::MapCache::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(params != nullptr)
    {
        children["params"] = params;
    }

    return children;
}

void LispState::LispRouters::Instances::Af::MapCache::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params" || name == "afi" || name == "address")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::Params()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    mcast_priority{YType::uint8, "mcast-priority"},
    mcast_weight{YType::uint8, "mcast-weight"}
{

    yang_name = "params"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true;
}

LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::~Params()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| mcast_priority.is_set
	|| mcast_weight.is_set;
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mcast_priority.yfilter)
	|| ydk::is_set(mcast_weight.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mcast_priority.is_set || is_set(mcast_priority.yfilter)) leaf_name_data.push_back(mcast_priority.get_name_leafdata());
    if (mcast_weight.is_set || is_set(mcast_weight.yfilter)) leaf_name_data.push_back(mcast_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority = value;
        mcast_priority.value_namespace = name_space;
        mcast_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight = value;
        mcast_weight.value_namespace = name_space;
        mcast_weight.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority.yfilter = yfilter;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::Rloc::Params::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "mcast-priority" || name == "mcast-weight")
        return true;
    return false;
}

const Enum::YLeaf LispAddressFamilyType::ipv4_afi {0, "ipv4-afi"};
const Enum::YLeaf LispAddressFamilyType::ipv6_afi {1, "ipv6-afi"};
const Enum::YLeaf LispAddressFamilyType::mac_afi {2, "mac-afi"};

const Enum::YLeaf LispIaftypeType::iaf_ipv4 {0, "iaf-ipv4"};
const Enum::YLeaf LispIaftypeType::iaf_ipv6 {1, "iaf-ipv6"};
const Enum::YLeaf LispIaftypeType::iaf_mac {2, "iaf-mac"};
const Enum::YLeaf LispIaftypeType::iaf_ar {3, "iaf-ar"};
const Enum::YLeaf LispIaftypeType::iaf_rar {4, "iaf-rar"};

const Enum::YLeaf LispMapReplyActionType::no_action {0, "no-action"};
const Enum::YLeaf LispMapReplyActionType::natively_forward {1, "natively-forward"};
const Enum::YLeaf LispMapReplyActionType::send_map_request {2, "send-map-request"};
const Enum::YLeaf LispMapReplyActionType::drop {3, "drop"};


}
}

