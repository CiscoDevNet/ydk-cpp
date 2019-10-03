
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unprotected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Level2Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>())
    , some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>())
    , unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    some_paths_protected->parent = this;
    unprotected->parent = this;

    yang_name = "level2-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::~Level2Prefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return (all_paths_protected !=  nullptr && all_paths_protected->has_data())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_data())
	|| (unprotected !=  nullptr && unprotected->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| (all_paths_protected !=  nullptr && all_paths_protected->has_operation())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_operation())
	|| (unprotected !=  nullptr && unprotected->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected == nullptr)
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>();
        }
        return all_paths_protected;
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected == nullptr)
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>();
        }
        return some_paths_protected;
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected == nullptr)
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>();
        }
        return unprotected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all_paths_protected != nullptr)
    {
        _children["all-paths-protected"] = all_paths_protected;
    }

    if(some_paths_protected != nullptr)
    {
        _children["some-paths-protected"] = some_paths_protected;
    }

    if(unprotected != nullptr)
    {
        _children["unprotected"] = unprotected;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-paths-protected" || name == "some-paths-protected" || name == "unprotected")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "all-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "some-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unprotected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::UnreachablePrefixes()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unreachable-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::~UnreachablePrefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locators()
    :
    srv6_locator(this, {})
{

    yang_name = "srv6-locators"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::~Srv6Locators()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srv6_locator.len(); index++)
    {
        if(srv6_locator[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::has_operation() const
{
    for (std::size_t index=0; index<srv6_locator.len(); index++)
    {
        if(srv6_locator[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Srv6Locators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-locators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Srv6Locators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srv6-locator")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator>();
        ent_->parent = this;
        srv6_locator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srv6_locator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srv6-locator")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Srv6Locator()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    locator_name{YType::str, "locator-name"},
    locator_id{YType::uint32, "locator-id"},
    locator_format{YType::uint32, "locator-format"},
    locator_flags{YType::uint16, "locator-flags"},
    number_of_reserved_opcodes{YType::uint8, "number-of-reserved-opcodes"}
        ,
    opcode(this, {})
{

    yang_name = "srv6-locator"; yang_parent_name = "srv6-locators"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::~Srv6Locator()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opcode.len(); index++)
    {
        if(opcode[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| locator_name.is_set
	|| locator_id.is_set
	|| locator_format.is_set
	|| locator_flags.is_set
	|| number_of_reserved_opcodes.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::has_operation() const
{
    for (std::size_t index=0; index<opcode.len(); index++)
    {
        if(opcode[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(locator_id.yfilter)
	|| ydk::is_set(locator_format.yfilter)
	|| ydk::is_set(locator_flags.yfilter)
	|| ydk::is_set(number_of_reserved_opcodes.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-locator";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (locator_id.is_set || is_set(locator_id.yfilter)) leaf_name_data.push_back(locator_id.get_name_leafdata());
    if (locator_format.is_set || is_set(locator_format.yfilter)) leaf_name_data.push_back(locator_format.get_name_leafdata());
    if (locator_flags.is_set || is_set(locator_flags.yfilter)) leaf_name_data.push_back(locator_flags.get_name_leafdata());
    if (number_of_reserved_opcodes.is_set || is_set(number_of_reserved_opcodes.yfilter)) leaf_name_data.push_back(number_of_reserved_opcodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opcode")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode>();
        ent_->parent = this;
        opcode.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opcode.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-id")
    {
        locator_id = value;
        locator_id.value_namespace = name_space;
        locator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-format")
    {
        locator_format = value;
        locator_format.value_namespace = name_space;
        locator_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-flags")
    {
        locator_flags = value;
        locator_flags.value_namespace = name_space;
        locator_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-reserved-opcodes")
    {
        number_of_reserved_opcodes = value;
        number_of_reserved_opcodes.value_namespace = name_space;
        number_of_reserved_opcodes.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "locator-id")
    {
        locator_id.yfilter = yfilter;
    }
    if(value_path == "locator-format")
    {
        locator_format.yfilter = yfilter;
    }
    if(value_path == "locator-flags")
    {
        locator_flags.yfilter = yfilter;
    }
    if(value_path == "number-of-reserved-opcodes")
    {
        number_of_reserved_opcodes.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opcode" || name == "prefix" || name == "prefix-length" || name == "locator-name" || name == "locator-id" || name == "locator-format" || name == "locator-flags" || name == "number-of-reserved-opcodes")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::Opcode()
    :
    function_type{YType::enumeration, "function-type"},
    function_opcode{YType::uint16, "function-opcode"}
{

    yang_name = "opcode"; yang_parent_name = "srv6-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::~Opcode()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::has_data() const
{
    if (is_presence_container) return true;
    return function_type.is_set
	|| function_opcode.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(function_opcode.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opcode";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (function_opcode.is_set || is_set(function_opcode.yfilter)) leaf_name_data.push_back(function_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-opcode")
    {
        function_opcode = value;
        function_opcode.value_namespace = name_space;
        function_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "function-opcode")
    {
        function_opcode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Srv6Locators::Srv6Locator::Opcode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "function-type" || name == "function-opcode")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevels()
    :
    topology_level(this, {"level"})
{

    yang_name = "topology-levels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::~TopologyLevels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_level.len(); index++)
    {
        if(topology_level[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_operation() const
{
    for (std::size_t index=0; index<topology_level.len(); index++)
    {
        if(topology_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-level")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel>();
        ent_->parent = this;
        topology_level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology_level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologyLevel()
    :
    level{YType::enumeration, "level"}
        ,
    te_advertisements(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>())
    , te_adjacency_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>())
    , spf_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>())
    , te_tunnels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>())
    , ipv4_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>())
    , topology_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>())
    , ipv6_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>())
{
    te_advertisements->parent = this;
    te_adjacency_log->parent = this;
    spf_log->parent = this;
    te_tunnels->parent = this;
    ipv4_link_topologies->parent = this;
    topology_summary->parent = this;
    ipv6_link_topologies->parent = this;

    yang_name = "topology-level"; yang_parent_name = "topology-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::~TopologyLevel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (te_advertisements !=  nullptr && te_advertisements->has_data())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_data())
	|| (spf_log !=  nullptr && spf_log->has_data())
	|| (te_tunnels !=  nullptr && te_tunnels->has_data())
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (te_advertisements !=  nullptr && te_advertisements->has_operation())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_operation())
	|| (spf_log !=  nullptr && spf_log->has_operation())
	|| (te_tunnels !=  nullptr && te_tunnels->has_operation())
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-level";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-advertisements")
    {
        if(te_advertisements == nullptr)
        {
            te_advertisements = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>();
        }
        return te_advertisements;
    }

    if(child_yang_name == "te-adjacency-log")
    {
        if(te_adjacency_log == nullptr)
        {
            te_adjacency_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>();
        }
        return te_adjacency_log;
    }

    if(child_yang_name == "spf-log")
    {
        if(spf_log == nullptr)
        {
            spf_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>();
        }
        return spf_log;
    }

    if(child_yang_name == "te-tunnels")
    {
        if(te_tunnels == nullptr)
        {
            te_tunnels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>();
        }
        return te_tunnels;
    }

    if(child_yang_name == "ipv4-link-topologies")
    {
        if(ipv4_link_topologies == nullptr)
        {
            ipv4_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>();
        }
        return ipv4_link_topologies;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "ipv6-link-topologies")
    {
        if(ipv6_link_topologies == nullptr)
        {
            ipv6_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>();
        }
        return ipv6_link_topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_advertisements != nullptr)
    {
        _children["te-advertisements"] = te_advertisements;
    }

    if(te_adjacency_log != nullptr)
    {
        _children["te-adjacency-log"] = te_adjacency_log;
    }

    if(spf_log != nullptr)
    {
        _children["spf-log"] = spf_log;
    }

    if(te_tunnels != nullptr)
    {
        _children["te-tunnels"] = te_tunnels;
    }

    if(ipv4_link_topologies != nullptr)
    {
        _children["ipv4-link-topologies"] = ipv4_link_topologies;
    }

    if(topology_summary != nullptr)
    {
        _children["topology-summary"] = topology_summary;
    }

    if(ipv6_link_topologies != nullptr)
    {
        _children["ipv6-link-topologies"] = ipv6_link_topologies;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-advertisements" || name == "te-adjacency-log" || name == "spf-log" || name == "te-tunnels" || name == "ipv4-link-topologies" || name == "topology-summary" || name == "ipv6-link-topologies" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdvertisements()
    :
    te_adv_data_present{YType::boolean, "te-adv-data-present"},
    te_system_id{YType::str, "te-system-id"},
    te_local_router_id{YType::str, "te-local-router-id"}
        ,
    tepceadv(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>())
    , te_adv(this, {})
{
    tepceadv->parent = this;

    yang_name = "te-advertisements"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::~TeAdvertisements()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_adv.len(); index++)
    {
        if(te_adv[index]->has_data())
            return true;
    }
    return te_adv_data_present.is_set
	|| te_system_id.is_set
	|| te_local_router_id.is_set
	|| (tepceadv !=  nullptr && tepceadv->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_operation() const
{
    for (std::size_t index=0; index<te_adv.len(); index++)
    {
        if(te_adv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_adv_data_present.yfilter)
	|| ydk::is_set(te_system_id.yfilter)
	|| ydk::is_set(te_local_router_id.yfilter)
	|| (tepceadv !=  nullptr && tepceadv->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_adv_data_present.is_set || is_set(te_adv_data_present.yfilter)) leaf_name_data.push_back(te_adv_data_present.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.yfilter)) leaf_name_data.push_back(te_system_id.get_name_leafdata());
    if (te_local_router_id.is_set || is_set(te_local_router_id.yfilter)) leaf_name_data.push_back(te_local_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tepceadv")
    {
        if(tepceadv == nullptr)
        {
            tepceadv = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>();
        }
        return tepceadv;
    }

    if(child_yang_name == "te-adv")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv>();
        ent_->parent = this;
        te_adv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tepceadv != nullptr)
    {
        _children["tepceadv"] = tepceadv;
    }

    count_ = 0;
    for (auto ent_ : te_adv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present = value;
        te_adv_data_present.value_namespace = name_space;
        te_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
        te_system_id.value_namespace = name_space;
        te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id = value;
        te_local_router_id.value_namespace = name_space;
        te_local_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "te-system-id")
    {
        te_system_id.yfilter = yfilter;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tepceadv" || name == "te-adv" || name == "te-adv-data-present" || name == "te-system-id" || name == "te-local-router-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::Tepceadv()
    :
    pce_adv_data_present{YType::boolean, "pce-adv-data-present"},
    pce_flooding_scope{YType::enumeration, "pce-flooding-scope"},
    pce_address_ipv4{YType::str, "pce-address-ipv4"},
    pce_path_scope_bits{YType::uint8, "pce-path-scope-bits"},
    pce_path_scope_prefs{YType::uint16, "pce-path-scope-prefs"}
{

    yang_name = "tepceadv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::~Tepceadv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_data() const
{
    if (is_presence_container) return true;
    return pce_adv_data_present.is_set
	|| pce_flooding_scope.is_set
	|| pce_address_ipv4.is_set
	|| pce_path_scope_bits.is_set
	|| pce_path_scope_prefs.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_adv_data_present.yfilter)
	|| ydk::is_set(pce_flooding_scope.yfilter)
	|| ydk::is_set(pce_address_ipv4.yfilter)
	|| ydk::is_set(pce_path_scope_bits.yfilter)
	|| ydk::is_set(pce_path_scope_prefs.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tepceadv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_adv_data_present.is_set || is_set(pce_adv_data_present.yfilter)) leaf_name_data.push_back(pce_adv_data_present.get_name_leafdata());
    if (pce_flooding_scope.is_set || is_set(pce_flooding_scope.yfilter)) leaf_name_data.push_back(pce_flooding_scope.get_name_leafdata());
    if (pce_address_ipv4.is_set || is_set(pce_address_ipv4.yfilter)) leaf_name_data.push_back(pce_address_ipv4.get_name_leafdata());
    if (pce_path_scope_bits.is_set || is_set(pce_path_scope_bits.yfilter)) leaf_name_data.push_back(pce_path_scope_bits.get_name_leafdata());
    if (pce_path_scope_prefs.is_set || is_set(pce_path_scope_prefs.yfilter)) leaf_name_data.push_back(pce_path_scope_prefs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present = value;
        pce_adv_data_present.value_namespace = name_space;
        pce_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope = value;
        pce_flooding_scope.value_namespace = name_space;
        pce_flooding_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4 = value;
        pce_address_ipv4.value_namespace = name_space;
        pce_address_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits = value;
        pce_path_scope_bits.value_namespace = name_space;
        pce_path_scope_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs = value;
        pce_path_scope_prefs.value_namespace = name_space;
        pce_path_scope_prefs.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope.yfilter = yfilter;
    }
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-adv-data-present" || name == "pce-flooding-scope" || name == "pce-address-ipv4" || name == "pce-path-scope-bits" || name == "pce-path-scope-prefs")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeAdv()
    :
    te_neighbor_system_id{YType::str, "te-neighbor-system-id"},
    link_type{YType::enumeration, "link-type"},
    local_ip_address{YType::str, "local-ip-address"},
    te_neighbor_ip_address{YType::str, "te-neighbor-ip-address"},
    te_metric{YType::uint32, "te-metric"},
    te_physical_link_bandwidth{YType::uint32, "te-physical-link-bandwidth"},
    te_reserved_link_bandwidth{YType::uint32, "te-reserved-link-bandwidth"},
    te_subpool_reserved_link_bandwidth{YType::uint32, "te-subpool-reserved-link-bandwidth"},
    te_affinity{YType::uint32, "te-affinity"},
    te_ext_admin_num{YType::uint32, "te-ext-admin-num"},
    te_sub_tlv_data_present{YType::boolean, "te-sub-tlv-data-present"}
        ,
    te_transmitted_bandwidth(this, {})
    , te_subpool_transmitted_bandwidth(this, {})
    , te_ext_admin_sub(this, {})
    , te_sub_tlv(this, {})
{

    yang_name = "te-adv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::~TeAdv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_transmitted_bandwidth.len(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.len(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_ext_admin_sub.len(); index++)
    {
        if(te_ext_admin_sub[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.len(); index++)
    {
        if(te_sub_tlv[index]->has_data())
            return true;
    }
    return te_neighbor_system_id.is_set
	|| link_type.is_set
	|| local_ip_address.is_set
	|| te_neighbor_ip_address.is_set
	|| te_metric.is_set
	|| te_physical_link_bandwidth.is_set
	|| te_reserved_link_bandwidth.is_set
	|| te_subpool_reserved_link_bandwidth.is_set
	|| te_affinity.is_set
	|| te_ext_admin_num.is_set
	|| te_sub_tlv_data_present.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_operation() const
{
    for (std::size_t index=0; index<te_transmitted_bandwidth.len(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.len(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_ext_admin_sub.len(); index++)
    {
        if(te_ext_admin_sub[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.len(); index++)
    {
        if(te_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_neighbor_system_id.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(te_neighbor_ip_address.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(te_physical_link_bandwidth.yfilter)
	|| ydk::is_set(te_reserved_link_bandwidth.yfilter)
	|| ydk::is_set(te_subpool_reserved_link_bandwidth.yfilter)
	|| ydk::is_set(te_affinity.yfilter)
	|| ydk::is_set(te_ext_admin_num.yfilter)
	|| ydk::is_set(te_sub_tlv_data_present.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_neighbor_system_id.is_set || is_set(te_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_neighbor_system_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (te_neighbor_ip_address.is_set || is_set(te_neighbor_ip_address.yfilter)) leaf_name_data.push_back(te_neighbor_ip_address.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (te_physical_link_bandwidth.is_set || is_set(te_physical_link_bandwidth.yfilter)) leaf_name_data.push_back(te_physical_link_bandwidth.get_name_leafdata());
    if (te_reserved_link_bandwidth.is_set || is_set(te_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_reserved_link_bandwidth.get_name_leafdata());
    if (te_subpool_reserved_link_bandwidth.is_set || is_set(te_subpool_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_subpool_reserved_link_bandwidth.get_name_leafdata());
    if (te_affinity.is_set || is_set(te_affinity.yfilter)) leaf_name_data.push_back(te_affinity.get_name_leafdata());
    if (te_ext_admin_num.is_set || is_set(te_ext_admin_num.yfilter)) leaf_name_data.push_back(te_ext_admin_num.get_name_leafdata());
    if (te_sub_tlv_data_present.is_set || is_set(te_sub_tlv_data_present.yfilter)) leaf_name_data.push_back(te_sub_tlv_data_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-transmitted-bandwidth")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth>();
        ent_->parent = this;
        te_transmitted_bandwidth.append(ent_);
        return ent_;
    }

    if(child_yang_name == "te-subpool-transmitted-bandwidth")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth>();
        ent_->parent = this;
        te_subpool_transmitted_bandwidth.append(ent_);
        return ent_;
    }

    if(child_yang_name == "te-ext-admin-sub")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub>();
        ent_->parent = this;
        te_ext_admin_sub.append(ent_);
        return ent_;
    }

    if(child_yang_name == "te-sub-tlv")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv>();
        ent_->parent = this;
        te_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_transmitted_bandwidth.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : te_subpool_transmitted_bandwidth.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : te_ext_admin_sub.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : te_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id = value;
        te_neighbor_system_id.value_namespace = name_space;
        te_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address = value;
        te_neighbor_ip_address.value_namespace = name_space;
        te_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth = value;
        te_physical_link_bandwidth.value_namespace = name_space;
        te_physical_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth = value;
        te_reserved_link_bandwidth.value_namespace = name_space;
        te_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth = value;
        te_subpool_reserved_link_bandwidth.value_namespace = name_space;
        te_subpool_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-affinity")
    {
        te_affinity = value;
        te_affinity.value_namespace = name_space;
        te_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num = value;
        te_ext_admin_num.value_namespace = name_space;
        te_ext_admin_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present = value;
        te_sub_tlv_data_present.value_namespace = name_space;
        te_sub_tlv_data_present.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-affinity")
    {
        te_affinity.yfilter = yfilter;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-transmitted-bandwidth" || name == "te-subpool-transmitted-bandwidth" || name == "te-ext-admin-sub" || name == "te-sub-tlv" || name == "te-neighbor-system-id" || name == "link-type" || name == "local-ip-address" || name == "te-neighbor-ip-address" || name == "te-metric" || name == "te-physical-link-bandwidth" || name == "te-reserved-link-bandwidth" || name == "te-subpool-reserved-link-bandwidth" || name == "te-affinity" || name == "te-ext-admin-num" || name == "te-sub-tlv-data-present")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::TeTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::~TeTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-transmitted-bandwidth";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::TeSubpoolTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-subpool-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::~TeSubpoolTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-subpool-transmitted-bandwidth";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::TeExtAdminSub()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-ext-admin-sub"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::~TeExtAdminSub()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-ext-admin-sub";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::TeSubTlv()
    :
    te_sub_tlv_type{YType::uint16, "te-sub-tlv-type"},
    te_sub_tlv_length{YType::uint16, "te-sub-tlv-length"},
    te_sub_tlv_value{YType::str, "te-sub-tlv-value"}
{

    yang_name = "te-sub-tlv"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::~TeSubTlv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return te_sub_tlv_type.is_set
	|| te_sub_tlv_length.is_set
	|| te_sub_tlv_value.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_sub_tlv_type.yfilter)
	|| ydk::is_set(te_sub_tlv_length.yfilter)
	|| ydk::is_set(te_sub_tlv_value.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_sub_tlv_type.is_set || is_set(te_sub_tlv_type.yfilter)) leaf_name_data.push_back(te_sub_tlv_type.get_name_leafdata());
    if (te_sub_tlv_length.is_set || is_set(te_sub_tlv_length.yfilter)) leaf_name_data.push_back(te_sub_tlv_length.get_name_leafdata());
    if (te_sub_tlv_value.is_set || is_set(te_sub_tlv_value.yfilter)) leaf_name_data.push_back(te_sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type = value;
        te_sub_tlv_type.value_namespace = name_space;
        te_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length = value;
        te_sub_tlv_length.value_namespace = name_space;
        te_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value = value;
        te_sub_tlv_value.value_namespace = name_space;
        te_sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-sub-tlv-type" || name == "te-sub-tlv-length" || name == "te-sub-tlv-value")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::TeAdjacencyLog()
    :
    log_entry(this, {})
{

    yang_name = "te-adjacency-log"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::~TeAdjacencyLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adjacency-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry>();
        ent_->parent = this;
        log_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : log_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::LogEntry()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    status{YType::boolean, "status"},
    log_interface{YType::str, "log-interface"},
    te_log_neighbor_system_id{YType::str, "te-log-neighbor-system-id"}
        ,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "te-adjacency-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_ip_address.is_set
	|| status.is_set
	|| log_interface.is_set
	|| te_log_neighbor_system_id.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(log_interface.yfilter)
	|| ydk::is_set(te_log_neighbor_system_id.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (log_interface.is_set || is_set(log_interface.yfilter)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (te_log_neighbor_system_id.is_set || is_set(te_log_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_log_neighbor_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_data != nullptr)
    {
        _children["generic-data"] = generic_data;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-interface")
    {
        log_interface = value;
        log_interface.value_namespace = name_space;
        log_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id = value;
        te_log_neighbor_system_id.value_namespace = name_space;
        te_log_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "log-interface")
    {
        log_interface.yfilter = yfilter;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "neighbor-ip-address" || name == "status" || name == "log-interface" || name == "te-log-neighbor-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::SpfLog()
    :
    log_entry(this, {})
{

    yang_name = "spf-log"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::~SpfLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry>();
        ent_->parent = this;
        log_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : log_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::LogEntry()
    :
    class_{YType::enumeration, "class"},
    wait_enforced{YType::uint32, "wait-enforced"},
    next_wait_interval{YType::uint32, "next-wait-interval"},
    updated_lsp_count{YType::uint32, "updated-lsp-count"}
        ,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>())
    , triggers(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>())
    , spt_calculation_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>())
    , route_update_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>())
{
    generic_data->parent = this;
    triggers->parent = this;
    spt_calculation_statistics->parent = this;
    route_update_statistics->parent = this;

    yang_name = "log-entry"; yang_parent_name = "spf-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    return class_.is_set
	|| wait_enforced.is_set
	|| next_wait_interval.is_set
	|| updated_lsp_count.is_set
	|| (generic_data !=  nullptr && generic_data->has_data())
	|| (triggers !=  nullptr && triggers->has_data())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_data())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(wait_enforced.yfilter)
	|| ydk::is_set(next_wait_interval.yfilter)
	|| ydk::is_set(updated_lsp_count.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation())
	|| (triggers !=  nullptr && triggers->has_operation())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_operation())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (wait_enforced.is_set || is_set(wait_enforced.yfilter)) leaf_name_data.push_back(wait_enforced.get_name_leafdata());
    if (next_wait_interval.is_set || is_set(next_wait_interval.yfilter)) leaf_name_data.push_back(next_wait_interval.get_name_leafdata());
    if (updated_lsp_count.is_set || is_set(updated_lsp_count.yfilter)) leaf_name_data.push_back(updated_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "triggers")
    {
        if(triggers == nullptr)
        {
            triggers = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>();
        }
        return triggers;
    }

    if(child_yang_name == "spt-calculation-statistics")
    {
        if(spt_calculation_statistics == nullptr)
        {
            spt_calculation_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>();
        }
        return spt_calculation_statistics;
    }

    if(child_yang_name == "route-update-statistics")
    {
        if(route_update_statistics == nullptr)
        {
            route_update_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>();
        }
        return route_update_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_data != nullptr)
    {
        _children["generic-data"] = generic_data;
    }

    if(triggers != nullptr)
    {
        _children["triggers"] = triggers;
    }

    if(spt_calculation_statistics != nullptr)
    {
        _children["spt-calculation-statistics"] = spt_calculation_statistics;
    }

    if(route_update_statistics != nullptr)
    {
        _children["route-update-statistics"] = route_update_statistics;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-enforced")
    {
        wait_enforced = value;
        wait_enforced.value_namespace = name_space;
        wait_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-wait-interval")
    {
        next_wait_interval = value;
        next_wait_interval.value_namespace = name_space;
        next_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updated-lsp-count")
    {
        updated_lsp_count = value;
        updated_lsp_count.value_namespace = name_space;
        updated_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "wait-enforced")
    {
        wait_enforced.yfilter = yfilter;
    }
    if(value_path == "next-wait-interval")
    {
        next_wait_interval.yfilter = yfilter;
    }
    if(value_path == "updated-lsp-count")
    {
        updated_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "triggers" || name == "spt-calculation-statistics" || name == "route-update-statistics" || name == "class" || name == "wait-enforced" || name == "next-wait-interval" || name == "updated-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Triggers()
    :
    unique_trigger_count{YType::uint32, "unique-trigger-count"},
    first_trigger_lsp_id{YType::str, "first-trigger-lsp-id"},
    trigger_link{YType::str, "trigger-link"},
    trigger_next_hop_id{YType::str, "trigger-next-hop-id"},
    is_sr_uloop_calculation{YType::boolean, "is-sr-uloop-calculation"},
    is_sr_uloop_link_down{YType::boolean, "is-sr-uloop-link-down"}
        ,
    trigger_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>())
    , trigger(this, {})
{
    trigger_prefix->parent = this;

    yang_name = "triggers"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::~Triggers()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trigger.len(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return unique_trigger_count.is_set
	|| first_trigger_lsp_id.is_set
	|| trigger_link.is_set
	|| trigger_next_hop_id.is_set
	|| is_sr_uloop_calculation.is_set
	|| is_sr_uloop_link_down.is_set
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_operation() const
{
    for (std::size_t index=0; index<trigger.len(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unique_trigger_count.yfilter)
	|| ydk::is_set(first_trigger_lsp_id.yfilter)
	|| ydk::is_set(trigger_link.yfilter)
	|| ydk::is_set(trigger_next_hop_id.yfilter)
	|| ydk::is_set(is_sr_uloop_calculation.yfilter)
	|| ydk::is_set(is_sr_uloop_link_down.yfilter)
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unique_trigger_count.is_set || is_set(unique_trigger_count.yfilter)) leaf_name_data.push_back(unique_trigger_count.get_name_leafdata());
    if (first_trigger_lsp_id.is_set || is_set(first_trigger_lsp_id.yfilter)) leaf_name_data.push_back(first_trigger_lsp_id.get_name_leafdata());
    if (trigger_link.is_set || is_set(trigger_link.yfilter)) leaf_name_data.push_back(trigger_link.get_name_leafdata());
    if (trigger_next_hop_id.is_set || is_set(trigger_next_hop_id.yfilter)) leaf_name_data.push_back(trigger_next_hop_id.get_name_leafdata());
    if (is_sr_uloop_calculation.is_set || is_set(is_sr_uloop_calculation.yfilter)) leaf_name_data.push_back(is_sr_uloop_calculation.get_name_leafdata());
    if (is_sr_uloop_link_down.is_set || is_set(is_sr_uloop_link_down.yfilter)) leaf_name_data.push_back(is_sr_uloop_link_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-prefix")
    {
        if(trigger_prefix == nullptr)
        {
            trigger_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>();
        }
        return trigger_prefix;
    }

    if(child_yang_name == "trigger")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger>();
        ent_->parent = this;
        trigger.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_prefix != nullptr)
    {
        _children["trigger-prefix"] = trigger_prefix;
    }

    count_ = 0;
    for (auto ent_ : trigger.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unique-trigger-count")
    {
        unique_trigger_count = value;
        unique_trigger_count.value_namespace = name_space;
        unique_trigger_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-trigger-lsp-id")
    {
        first_trigger_lsp_id = value;
        first_trigger_lsp_id.value_namespace = name_space;
        first_trigger_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-link")
    {
        trigger_link = value;
        trigger_link.value_namespace = name_space;
        trigger_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-next-hop-id")
    {
        trigger_next_hop_id = value;
        trigger_next_hop_id.value_namespace = name_space;
        trigger_next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-uloop-calculation")
    {
        is_sr_uloop_calculation = value;
        is_sr_uloop_calculation.value_namespace = name_space;
        is_sr_uloop_calculation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-uloop-link-down")
    {
        is_sr_uloop_link_down = value;
        is_sr_uloop_link_down.value_namespace = name_space;
        is_sr_uloop_link_down.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unique-trigger-count")
    {
        unique_trigger_count.yfilter = yfilter;
    }
    if(value_path == "first-trigger-lsp-id")
    {
        first_trigger_lsp_id.yfilter = yfilter;
    }
    if(value_path == "trigger-link")
    {
        trigger_link.yfilter = yfilter;
    }
    if(value_path == "trigger-next-hop-id")
    {
        trigger_next_hop_id.yfilter = yfilter;
    }
    if(value_path == "is-sr-uloop-calculation")
    {
        is_sr_uloop_calculation.yfilter = yfilter;
    }
    if(value_path == "is-sr-uloop-link-down")
    {
        is_sr_uloop_link_down.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-prefix" || name == "trigger" || name == "unique-trigger-count" || name == "first-trigger-lsp-id" || name == "trigger-link" || name == "trigger-next-hop-id" || name == "is-sr-uloop-calculation" || name == "is-sr-uloop-link-down")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::TriggerPrefix()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>())
    , ipv6(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "trigger-prefix"; yang_parent_name = "triggers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::~TriggerPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "trigger-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "trigger-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::Trigger()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "trigger"; yang_parent_name = "triggers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::~Trigger()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::SptCalculationStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>())
    , node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>())
{
    duration->parent = this;
    node_counts->parent = this;

    yang_name = "spt-calculation-statistics"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::~SptCalculationStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (duration !=  nullptr && duration->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-calculation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts == nullptr)
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>();
        }
        return node_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    if(node_counts != nullptr)
    {
        _children["node-counts"] = node_counts;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "node-counts")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::Duration()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "duration"; yang_parent_name = "spt-calculation-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::NodeCounts()
    :
    unreachable{YType::uint32, "unreachable"},
    reachable{YType::uint32, "reachable"},
    added{YType::uint32, "added"},
    deleted{YType::uint32, "deleted"},
    modified{YType::uint32, "modified"},
    touched{YType::uint32, "touched"}
{

    yang_name = "node-counts"; yang_parent_name = "spt-calculation-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_data() const
{
    if (is_presence_container) return true;
    return unreachable.is_set
	|| reachable.is_set
	|| added.is_set
	|| deleted.is_set
	|| modified.is_set
	|| touched.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(added.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(modified.yfilter)
	|| ydk::is_set(touched.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (added.is_set || is_set(added.yfilter)) leaf_name_data.push_back(added.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (modified.is_set || is_set(modified.yfilter)) leaf_name_data.push_back(modified.get_name_leafdata());
    if (touched.is_set || is_set(touched.yfilter)) leaf_name_data.push_back(touched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "added")
    {
        added = value;
        added.value_namespace = name_space;
        added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modified")
    {
        modified = value;
        modified.value_namespace = name_space;
        modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touched")
    {
        touched = value;
        touched.value_namespace = name_space;
        touched.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "added")
    {
        added.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
    if(value_path == "modified")
    {
        modified.yfilter = yfilter;
    }
    if(value_path == "touched")
    {
        touched.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "reachable" || name == "added" || name == "deleted" || name == "modified" || name == "touched")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteUpdateStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>())
    , duration_breakdown(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>())
    , node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>())
    , item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>())
    , route_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>())
    , rib_batch_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>())
{
    duration->parent = this;
    duration_breakdown->parent = this;
    node_counts->parent = this;
    item_counts->parent = this;
    route_counts->parent = this;
    rib_batch_counts->parent = this;

    yang_name = "route-update-statistics"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::~RouteUpdateStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (duration !=  nullptr && duration->has_data())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data())
	|| (item_counts !=  nullptr && item_counts->has_data())
	|| (route_counts !=  nullptr && route_counts->has_data())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation())
	|| (item_counts !=  nullptr && item_counts->has_operation())
	|| (route_counts !=  nullptr && route_counts->has_operation())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "duration-breakdown")
    {
        if(duration_breakdown == nullptr)
        {
            duration_breakdown = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>();
        }
        return duration_breakdown;
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts == nullptr)
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>();
        }
        return node_counts;
    }

    if(child_yang_name == "item-counts")
    {
        if(item_counts == nullptr)
        {
            item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>();
        }
        return item_counts;
    }

    if(child_yang_name == "route-counts")
    {
        if(route_counts == nullptr)
        {
            route_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>();
        }
        return route_counts;
    }

    if(child_yang_name == "rib-batch-counts")
    {
        if(rib_batch_counts == nullptr)
        {
            rib_batch_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>();
        }
        return rib_batch_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    if(duration_breakdown != nullptr)
    {
        _children["duration-breakdown"] = duration_breakdown;
    }

    if(node_counts != nullptr)
    {
        _children["node-counts"] = node_counts;
    }

    if(item_counts != nullptr)
    {
        _children["item-counts"] = item_counts;
    }

    if(route_counts != nullptr)
    {
        _children["route-counts"] = route_counts;
    }

    if(rib_batch_counts != nullptr)
    {
        _children["rib-batch-counts"] = rib_batch_counts;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "duration-breakdown" || name == "node-counts" || name == "item-counts" || name == "route-counts" || name == "rib-batch-counts")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::Duration()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "duration"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::DurationBreakdown()
    :
    local_rib_update(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>())
    , global_rib_build(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>())
    , global_rib_send(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>())
{
    local_rib_update->parent = this;
    global_rib_build->parent = this;
    global_rib_send->parent = this;

    yang_name = "duration-breakdown"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::~DurationBreakdown()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_data() const
{
    if (is_presence_container) return true;
    return (local_rib_update !=  nullptr && local_rib_update->has_data())
	|| (global_rib_build !=  nullptr && global_rib_build->has_data())
	|| (global_rib_send !=  nullptr && global_rib_send->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_operation() const
{
    return is_set(yfilter)
	|| (local_rib_update !=  nullptr && local_rib_update->has_operation())
	|| (global_rib_build !=  nullptr && global_rib_build->has_operation())
	|| (global_rib_send !=  nullptr && global_rib_send->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration-breakdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-rib-update")
    {
        if(local_rib_update == nullptr)
        {
            local_rib_update = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>();
        }
        return local_rib_update;
    }

    if(child_yang_name == "global-rib-build")
    {
        if(global_rib_build == nullptr)
        {
            global_rib_build = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>();
        }
        return global_rib_build;
    }

    if(child_yang_name == "global-rib-send")
    {
        if(global_rib_send == nullptr)
        {
            global_rib_send = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>();
        }
        return global_rib_send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_rib_update != nullptr)
    {
        _children["local-rib-update"] = local_rib_update;
    }

    if(global_rib_build != nullptr)
    {
        _children["global-rib-build"] = global_rib_build;
    }

    if(global_rib_send != nullptr)
    {
        _children["global-rib-send"] = global_rib_send;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-rib-update" || name == "global-rib-build" || name == "global-rib-send")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::LocalRibUpdate()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>())
    , high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>())
    , medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>())
    , low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>())
{
    critical->parent = this;
    high->parent = this;
    medium->parent = this;
    low->parent = this;

    yang_name = "local-rib-update"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::~LocalRibUpdate()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_data() const
{
    if (is_presence_container) return true;
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (medium !=  nullptr && medium->has_data())
	|| (low !=  nullptr && low->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (medium !=  nullptr && medium->has_operation())
	|| (low !=  nullptr && low->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rib-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>();
        }
        return high;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>();
        }
        return medium;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>();
        }
        return low;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical != nullptr)
    {
        _children["critical"] = critical;
    }

    if(high != nullptr)
    {
        _children["high"] = high;
    }

    if(medium != nullptr)
    {
        _children["medium"] = medium;
    }

    if(low != nullptr)
    {
        _children["low"] = low;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::Critical()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "critical"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::High()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "high"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::Medium()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "medium"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::Low()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "low"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::GlobalRibBuild()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>())
    , high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>())
    , medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>())
    , low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>())
{
    critical->parent = this;
    high->parent = this;
    medium->parent = this;
    low->parent = this;

    yang_name = "global-rib-build"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::~GlobalRibBuild()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_data() const
{
    if (is_presence_container) return true;
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (medium !=  nullptr && medium->has_data())
	|| (low !=  nullptr && low->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (medium !=  nullptr && medium->has_operation())
	|| (low !=  nullptr && low->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>();
        }
        return high;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>();
        }
        return medium;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>();
        }
        return low;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical != nullptr)
    {
        _children["critical"] = critical;
    }

    if(high != nullptr)
    {
        _children["high"] = high;
    }

    if(medium != nullptr)
    {
        _children["medium"] = medium;
    }

    if(low != nullptr)
    {
        _children["low"] = low;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::Critical()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "critical"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::High()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "high"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::Medium()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "medium"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::Low()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "low"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::GlobalRibSend()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>())
    , high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>())
    , medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>())
    , low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>())
{
    critical->parent = this;
    high->parent = this;
    medium->parent = this;
    low->parent = this;

    yang_name = "global-rib-send"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::~GlobalRibSend()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_data() const
{
    if (is_presence_container) return true;
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (medium !=  nullptr && medium->has_data())
	|| (low !=  nullptr && low->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (medium !=  nullptr && medium->has_operation())
	|| (low !=  nullptr && low->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>();
        }
        return high;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>();
        }
        return medium;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>();
        }
        return low;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical != nullptr)
    {
        _children["critical"] = critical;
    }

    if(high != nullptr)
    {
        _children["high"] = high;
    }

    if(medium != nullptr)
    {
        _children["medium"] = medium;
    }

    if(low != nullptr)
    {
        _children["low"] = low;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::Critical()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "critical"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::High()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "high"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::Medium()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "medium"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::Low()
    :
    real_duration{YType::uint32, "real-duration"},
    cpu_duration{YType::uint32, "cpu-duration"}
{

    yang_name = "low"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_data() const
{
    if (is_presence_container) return true;
    return real_duration.is_set
	|| cpu_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(real_duration.yfilter)
	|| ydk::is_set(cpu_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());
    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "real-duration" || name == "cpu-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::NodeCounts()
    :
    total_touched{YType::uint32, "total-touched"}
        ,
    per_priority_touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>())
{
    per_priority_touched->parent = this;

    yang_name = "node-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_data() const
{
    if (is_presence_container) return true;
    return total_touched.is_set
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_touched.yfilter)
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_touched.is_set || is_set(total_touched.yfilter)) leaf_name_data.push_back(total_touched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-priority-touched")
    {
        if(per_priority_touched == nullptr)
        {
            per_priority_touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>();
        }
        return per_priority_touched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_priority_touched != nullptr)
    {
        _children["per-priority-touched"] = per_priority_touched;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-touched")
    {
        total_touched = value;
        total_touched.value_namespace = name_space;
        total_touched.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-touched")
    {
        total_touched.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-priority-touched" || name == "total-touched")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::PerPriorityTouched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "per-priority-touched"; yang_parent_name = "node-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::~PerPriorityTouched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-priority-touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::ItemCounts()
    :
    unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>())
    , reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>())
    , added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>())
    , deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>())
    , modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>())
    , touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>())
{
    unreachable->parent = this;
    reachable->parent = this;
    added->parent = this;
    deleted->parent = this;
    modified->parent = this;
    touched->parent = this;

    yang_name = "item-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::~ItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_data() const
{
    if (is_presence_container) return true;
    return (unreachable !=  nullptr && unreachable->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (touched !=  nullptr && touched->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (touched !=  nullptr && touched->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>();
        }
        return unreachable;
    }

    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "added")
    {
        if(added == nullptr)
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>();
        }
        return added;
    }

    if(child_yang_name == "deleted")
    {
        if(deleted == nullptr)
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>();
        }
        return deleted;
    }

    if(child_yang_name == "modified")
    {
        if(modified == nullptr)
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>();
        }
        return modified;
    }

    if(child_yang_name == "touched")
    {
        if(touched == nullptr)
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>();
        }
        return touched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unreachable != nullptr)
    {
        _children["unreachable"] = unreachable;
    }

    if(reachable != nullptr)
    {
        _children["reachable"] = reachable;
    }

    if(added != nullptr)
    {
        _children["added"] = added;
    }

    if(deleted != nullptr)
    {
        _children["deleted"] = deleted;
    }

    if(modified != nullptr)
    {
        _children["modified"] = modified;
    }

    if(touched != nullptr)
    {
        _children["touched"] = touched;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "reachable" || name == "added" || name == "deleted" || name == "modified" || name == "touched")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unreachable"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "reachable"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "added"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "deleted"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "modified"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "touched"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::RouteCounts()
    :
    unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>())
    , reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>())
    , added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>())
    , deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>())
    , modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>())
    , touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>())
{
    unreachable->parent = this;
    reachable->parent = this;
    added->parent = this;
    deleted->parent = this;
    modified->parent = this;
    touched->parent = this;

    yang_name = "route-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::~RouteCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_data() const
{
    if (is_presence_container) return true;
    return (unreachable !=  nullptr && unreachable->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (touched !=  nullptr && touched->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_operation() const
{
    return is_set(yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (touched !=  nullptr && touched->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>();
        }
        return unreachable;
    }

    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "added")
    {
        if(added == nullptr)
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>();
        }
        return added;
    }

    if(child_yang_name == "deleted")
    {
        if(deleted == nullptr)
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>();
        }
        return deleted;
    }

    if(child_yang_name == "modified")
    {
        if(modified == nullptr)
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>();
        }
        return modified;
    }

    if(child_yang_name == "touched")
    {
        if(touched == nullptr)
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>();
        }
        return touched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unreachable != nullptr)
    {
        _children["unreachable"] = unreachable;
    }

    if(reachable != nullptr)
    {
        _children["reachable"] = reachable;
    }

    if(added != nullptr)
    {
        _children["added"] = added;
    }

    if(deleted != nullptr)
    {
        _children["deleted"] = deleted;
    }

    if(modified != nullptr)
    {
        _children["modified"] = modified;
    }

    if(touched != nullptr)
    {
        _children["touched"] = touched;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "reachable" || name == "added" || name == "deleted" || name == "modified" || name == "touched")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unreachable"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "reachable"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "added"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "deleted"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "modified"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "touched"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::RibBatchCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "rib-batch-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::~RibBatchCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnels()
    :
    te_tunnel(this, {})
{

    yang_name = "te-tunnels"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::~TeTunnels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_tunnel.len(); index++)
    {
        if(te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_operation() const
{
    for (std::size_t index=0; index<te_tunnel.len(); index++)
    {
        if(te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-tunnel")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel>();
        ent_->parent = this;
        te_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::TeTunnel()
    :
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    te_system_id{YType::str, "te-system-id"},
    te_interface{YType::str, "te-interface"},
    te_bandwidth{YType::uint32, "te-bandwidth"},
    teigp_metric{YType::int32, "teigp-metric"},
    te_next_hop_ip_address{YType::str, "te-next-hop-ip-address"},
    te_mode_type{YType::enumeration, "te-mode-type"},
    teipv4fa_enabled{YType::boolean, "teipv4fa-enabled"},
    teipv6fa_enabled{YType::boolean, "teipv6fa-enabled"},
    teipv4aa_enabled{YType::boolean, "teipv4aa-enabled"},
    teipv6aa_enabled{YType::boolean, "teipv6aa-enabled"},
    te_checkpoint_object_id{YType::uint32, "te-checkpoint-object-id"},
    te_segment_routing_enabled{YType::boolean, "te-segment-routing-enabled"},
    te_segment_routing_strict_spf{YType::boolean, "te-segment-routing-strict-spf"},
    te_segment_routing_exclude{YType::boolean, "te-segment-routing-exclude"}
{

    yang_name = "te-tunnel"; yang_parent_name = "te-tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::~TeTunnel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| interface_name.is_set
	|| te_system_id.is_set
	|| te_interface.is_set
	|| te_bandwidth.is_set
	|| teigp_metric.is_set
	|| te_next_hop_ip_address.is_set
	|| te_mode_type.is_set
	|| teipv4fa_enabled.is_set
	|| teipv6fa_enabled.is_set
	|| teipv4aa_enabled.is_set
	|| teipv6aa_enabled.is_set
	|| te_checkpoint_object_id.is_set
	|| te_segment_routing_enabled.is_set
	|| te_segment_routing_strict_spf.is_set
	|| te_segment_routing_exclude.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(te_system_id.yfilter)
	|| ydk::is_set(te_interface.yfilter)
	|| ydk::is_set(te_bandwidth.yfilter)
	|| ydk::is_set(teigp_metric.yfilter)
	|| ydk::is_set(te_next_hop_ip_address.yfilter)
	|| ydk::is_set(te_mode_type.yfilter)
	|| ydk::is_set(teipv4fa_enabled.yfilter)
	|| ydk::is_set(teipv6fa_enabled.yfilter)
	|| ydk::is_set(teipv4aa_enabled.yfilter)
	|| ydk::is_set(teipv6aa_enabled.yfilter)
	|| ydk::is_set(te_checkpoint_object_id.yfilter)
	|| ydk::is_set(te_segment_routing_enabled.yfilter)
	|| ydk::is_set(te_segment_routing_strict_spf.yfilter)
	|| ydk::is_set(te_segment_routing_exclude.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.yfilter)) leaf_name_data.push_back(te_system_id.get_name_leafdata());
    if (te_interface.is_set || is_set(te_interface.yfilter)) leaf_name_data.push_back(te_interface.get_name_leafdata());
    if (te_bandwidth.is_set || is_set(te_bandwidth.yfilter)) leaf_name_data.push_back(te_bandwidth.get_name_leafdata());
    if (teigp_metric.is_set || is_set(teigp_metric.yfilter)) leaf_name_data.push_back(teigp_metric.get_name_leafdata());
    if (te_next_hop_ip_address.is_set || is_set(te_next_hop_ip_address.yfilter)) leaf_name_data.push_back(te_next_hop_ip_address.get_name_leafdata());
    if (te_mode_type.is_set || is_set(te_mode_type.yfilter)) leaf_name_data.push_back(te_mode_type.get_name_leafdata());
    if (teipv4fa_enabled.is_set || is_set(teipv4fa_enabled.yfilter)) leaf_name_data.push_back(teipv4fa_enabled.get_name_leafdata());
    if (teipv6fa_enabled.is_set || is_set(teipv6fa_enabled.yfilter)) leaf_name_data.push_back(teipv6fa_enabled.get_name_leafdata());
    if (teipv4aa_enabled.is_set || is_set(teipv4aa_enabled.yfilter)) leaf_name_data.push_back(teipv4aa_enabled.get_name_leafdata());
    if (teipv6aa_enabled.is_set || is_set(teipv6aa_enabled.yfilter)) leaf_name_data.push_back(teipv6aa_enabled.get_name_leafdata());
    if (te_checkpoint_object_id.is_set || is_set(te_checkpoint_object_id.yfilter)) leaf_name_data.push_back(te_checkpoint_object_id.get_name_leafdata());
    if (te_segment_routing_enabled.is_set || is_set(te_segment_routing_enabled.yfilter)) leaf_name_data.push_back(te_segment_routing_enabled.get_name_leafdata());
    if (te_segment_routing_strict_spf.is_set || is_set(te_segment_routing_strict_spf.yfilter)) leaf_name_data.push_back(te_segment_routing_strict_spf.get_name_leafdata());
    if (te_segment_routing_exclude.is_set || is_set(te_segment_routing_exclude.yfilter)) leaf_name_data.push_back(te_segment_routing_exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
        te_system_id.value_namespace = name_space;
        te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-interface")
    {
        te_interface = value;
        te_interface.value_namespace = name_space;
        te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-bandwidth")
    {
        te_bandwidth = value;
        te_bandwidth.value_namespace = name_space;
        te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teigp-metric")
    {
        teigp_metric = value;
        teigp_metric.value_namespace = name_space;
        teigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-next-hop-ip-address")
    {
        te_next_hop_ip_address = value;
        te_next_hop_ip_address.value_namespace = name_space;
        te_next_hop_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mode-type")
    {
        te_mode_type = value;
        te_mode_type.value_namespace = name_space;
        te_mode_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv4fa-enabled")
    {
        teipv4fa_enabled = value;
        teipv4fa_enabled.value_namespace = name_space;
        teipv4fa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv6fa-enabled")
    {
        teipv6fa_enabled = value;
        teipv6fa_enabled.value_namespace = name_space;
        teipv6fa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv4aa-enabled")
    {
        teipv4aa_enabled = value;
        teipv4aa_enabled.value_namespace = name_space;
        teipv4aa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv6aa-enabled")
    {
        teipv6aa_enabled = value;
        teipv6aa_enabled.value_namespace = name_space;
        teipv6aa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-checkpoint-object-id")
    {
        te_checkpoint_object_id = value;
        te_checkpoint_object_id.value_namespace = name_space;
        te_checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-enabled")
    {
        te_segment_routing_enabled = value;
        te_segment_routing_enabled.value_namespace = name_space;
        te_segment_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-strict-spf")
    {
        te_segment_routing_strict_spf = value;
        te_segment_routing_strict_spf.value_namespace = name_space;
        te_segment_routing_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-exclude")
    {
        te_segment_routing_exclude = value;
        te_segment_routing_exclude.value_namespace = name_space;
        te_segment_routing_exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "te-system-id")
    {
        te_system_id.yfilter = yfilter;
    }
    if(value_path == "te-interface")
    {
        te_interface.yfilter = yfilter;
    }
    if(value_path == "te-bandwidth")
    {
        te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "teigp-metric")
    {
        teigp_metric.yfilter = yfilter;
    }
    if(value_path == "te-next-hop-ip-address")
    {
        te_next_hop_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-mode-type")
    {
        te_mode_type.yfilter = yfilter;
    }
    if(value_path == "teipv4fa-enabled")
    {
        teipv4fa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv6fa-enabled")
    {
        teipv6fa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv4aa-enabled")
    {
        teipv4aa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv6aa-enabled")
    {
        teipv6aa_enabled.yfilter = yfilter;
    }
    if(value_path == "te-checkpoint-object-id")
    {
        te_checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-enabled")
    {
        te_segment_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-strict-spf")
    {
        te_segment_routing_strict_spf.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-exclude")
    {
        te_segment_routing_exclude.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "interface-name" || name == "te-system-id" || name == "te-interface" || name == "te-bandwidth" || name == "teigp-metric" || name == "te-next-hop-ip-address" || name == "te-mode-type" || name == "teipv4fa-enabled" || name == "teipv6fa-enabled" || name == "teipv4aa-enabled" || name == "teipv6aa-enabled" || name == "te-checkpoint-object-id" || name == "te-segment-routing-enabled" || name == "te-segment-routing-strict-spf" || name == "te-segment-routing-exclude")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopologies()
    :
    ipv4_link_topology(this, {"system_id"})
{

    yang_name = "ipv4-link-topologies"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::~Ipv4LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_link_topology.len(); index++)
    {
        if(ipv4_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv4_link_topology.len(); index++)
    {
        if(ipv4_link_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-link-topology")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology>();
        ent_->parent = this;
        ipv4_link_topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_link_topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-link-topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::Ipv4LinkTopology()
    :
    system_id{YType::str, "system-id"},
    source_address{YType::str, "source-address"},
    is_participant{YType::boolean, "is-participant"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_attached{YType::boolean, "is-attached"}
        ,
    reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>())
    , advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>())
{
    reachability_status->parent = this;
    advertised_prefix_item_counts->parent = this;

    yang_name = "ipv4-link-topology"; yang_parent_name = "ipv4-link-topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::~Ipv4LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| source_address.is_set
	|| is_participant.is_set
	|| is_overloaded.is_set
	|| is_attached.is_set
	|| (reachability_status !=  nullptr && reachability_status->has_data())
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(is_participant.yfilter)
	|| ydk::is_set(is_overloaded.yfilter)
	|| ydk::is_set(is_attached.yfilter)
	|| (reachability_status !=  nullptr && reachability_status->has_operation())
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topology";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.yfilter)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.yfilter)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.yfilter)) leaf_name_data.push_back(is_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachability-status")
    {
        if(reachability_status == nullptr)
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>();
        }
        return reachability_status;
    }

    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts == nullptr)
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>();
        }
        return advertised_prefix_item_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachability_status != nullptr)
    {
        _children["reachability-status"] = reachability_status;
    }

    if(advertised_prefix_item_counts != nullptr)
    {
        _children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
        is_participant.value_namespace = name_space;
        is_participant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
        is_overloaded.value_namespace = name_space;
        is_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
        is_attached.value_namespace = name_space;
        is_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "is-participant")
    {
        is_participant.yfilter = yfilter;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded.yfilter = yfilter;
    }
    if(value_path == "is-attached")
    {
        is_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachability-status" || name == "advertised-prefix-item-counts" || name == "system-id" || name == "source-address" || name == "is-participant" || name == "is-overloaded" || name == "is-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
        ,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;

    yang_name = "reachability-status"; yang_parent_name = "ipv4-link-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_data() const
{
    if (is_presence_container) return true;
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_status.yfilter)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.yfilter)) leaf_name_data.push_back(reachable_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-details")
    {
        if(reachable_details == nullptr)
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>();
        }
        return reachable_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachable_details != nullptr)
    {
        _children["reachable-details"] = reachable_details;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
        reachable_status.value_namespace = name_space;
        reachable_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-status")
    {
        reachable_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-details" || name == "reachable-status")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    root_distance{YType::uint32, "root-distance"},
    multicast_root_distance{YType::uint32, "multicast-root-distance"}
        ,
    paths(this, {})
    , multicast_path(this, {})
    , parent_(this, {})
    , children_(this, {})
{

    yang_name = "reachable-details"; yang_parent_name = "reachability-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.len(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<children_.len(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    return root_distance.is_set
	|| multicast_root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.len(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<children_.len(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(root_distance.yfilter)
	|| ydk::is_set(multicast_root_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_distance.is_set || is_set(root_distance.yfilter)) leaf_name_data.push_back(root_distance.get_name_leafdata());
    if (multicast_root_distance.is_set || is_set(multicast_root_distance.yfilter)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multicast-path")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        ent_->parent = this;
        multicast_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "parent")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent>();
        ent_->parent = this;
        parent_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "children")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children>();
        ent_->parent = this;
        children_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : multicast_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : parent_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : children_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "root-distance")
    {
        root_distance = value;
        root_distance.value_namespace = name_space;
        root_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
        multicast_root_distance.value_namespace = name_space;
        multicast_root_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "root-distance")
    {
        root_distance.yfilter = yfilter;
    }
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "multicast-path" || name == "parent" || name == "children" || name == "root-distance" || name == "multicast-root-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::Parent()
    :
    neighbor_id{YType::str, "neighbor-id"},
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"}
{

    yang_name = "parent"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::~Parent()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| intermediate_pseudonode.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "intermediate-pseudonode")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::Children()
    :
    neighbor_id{YType::str, "neighbor-id"},
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"}
{

    yang_name = "children"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::~Children()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| intermediate_pseudonode.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "intermediate-pseudonode")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv4-link-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::TopologySummary()
    :
    router_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>())
    , pseudonode_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>())
{
    router_node_count->parent = this;
    pseudonode_node_count->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::~TopologySummary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_data() const
{
    if (is_presence_container) return true;
    return (router_node_count !=  nullptr && router_node_count->has_data())
	|| (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| (router_node_count !=  nullptr && router_node_count->has_operation())
	|| (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-node-count")
    {
        if(router_node_count == nullptr)
        {
            router_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>();
        }
        return router_node_count;
    }

    if(child_yang_name == "pseudonode-node-count")
    {
        if(pseudonode_node_count == nullptr)
        {
            pseudonode_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>();
        }
        return pseudonode_node_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_node_count != nullptr)
    {
        _children["router-node-count"] = router_node_count;
    }

    if(pseudonode_node_count != nullptr)
    {
        _children["pseudonode-node-count"] = pseudonode_node_count;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-node-count" || name == "pseudonode-node-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::RouterNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{

    yang_name = "router-node-count"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::~RouterNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_data() const
{
    if (is_presence_container) return true;
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_node_count.yfilter)
	|| ydk::is_set(unreachable_node_count.yfilter)
	|| ydk::is_set(unreachable_participant_node_count.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-node-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.yfilter)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.yfilter)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.yfilter)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
        reachable_node_count.value_namespace = name_space;
        reachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
        unreachable_node_count.value_namespace = name_space;
        unreachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
        unreachable_participant_node_count.value_namespace = name_space;
        unreachable_participant_node_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-node-count" || name == "unreachable-node-count" || name == "unreachable-participant-node-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::PseudonodeNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{

    yang_name = "pseudonode-node-count"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::~PseudonodeNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_data() const
{
    if (is_presence_container) return true;
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_node_count.yfilter)
	|| ydk::is_set(unreachable_node_count.yfilter)
	|| ydk::is_set(unreachable_participant_node_count.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudonode-node-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.yfilter)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.yfilter)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.yfilter)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
        reachable_node_count.value_namespace = name_space;
        reachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
        unreachable_node_count.value_namespace = name_space;
        unreachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
        unreachable_participant_node_count.value_namespace = name_space;
        unreachable_participant_node_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-node-count" || name == "unreachable-node-count" || name == "unreachable-participant-node-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopologies()
    :
    ipv6_link_topology(this, {"system_id"})
{

    yang_name = "ipv6-link-topologies"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::~Ipv6LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_link_topology.len(); index++)
    {
        if(ipv6_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv6_link_topology.len(); index++)
    {
        if(ipv6_link_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-link-topology")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology>();
        ent_->parent = this;
        ipv6_link_topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_link_topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-link-topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::Ipv6LinkTopology()
    :
    system_id{YType::str, "system-id"},
    source_address{YType::str, "source-address"},
    is_participant{YType::boolean, "is-participant"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_attached{YType::boolean, "is-attached"}
        ,
    reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>())
    , advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>())
{
    reachability_status->parent = this;
    advertised_prefix_item_counts->parent = this;

    yang_name = "ipv6-link-topology"; yang_parent_name = "ipv6-link-topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::~Ipv6LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| source_address.is_set
	|| is_participant.is_set
	|| is_overloaded.is_set
	|| is_attached.is_set
	|| (reachability_status !=  nullptr && reachability_status->has_data())
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(is_participant.yfilter)
	|| ydk::is_set(is_overloaded.yfilter)
	|| ydk::is_set(is_attached.yfilter)
	|| (reachability_status !=  nullptr && reachability_status->has_operation())
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topology";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.yfilter)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.yfilter)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.yfilter)) leaf_name_data.push_back(is_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachability-status")
    {
        if(reachability_status == nullptr)
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>();
        }
        return reachability_status;
    }

    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts == nullptr)
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>();
        }
        return advertised_prefix_item_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachability_status != nullptr)
    {
        _children["reachability-status"] = reachability_status;
    }

    if(advertised_prefix_item_counts != nullptr)
    {
        _children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
        is_participant.value_namespace = name_space;
        is_participant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
        is_overloaded.value_namespace = name_space;
        is_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
        is_attached.value_namespace = name_space;
        is_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "is-participant")
    {
        is_participant.yfilter = yfilter;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded.yfilter = yfilter;
    }
    if(value_path == "is-attached")
    {
        is_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachability-status" || name == "advertised-prefix-item-counts" || name == "system-id" || name == "source-address" || name == "is-participant" || name == "is-overloaded" || name == "is-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
        ,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;

    yang_name = "reachability-status"; yang_parent_name = "ipv6-link-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_data() const
{
    if (is_presence_container) return true;
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_status.yfilter)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.yfilter)) leaf_name_data.push_back(reachable_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-details")
    {
        if(reachable_details == nullptr)
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>();
        }
        return reachable_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachable_details != nullptr)
    {
        _children["reachable-details"] = reachable_details;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
        reachable_status.value_namespace = name_space;
        reachable_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-status")
    {
        reachable_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-details" || name == "reachable-status")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    root_distance{YType::uint32, "root-distance"},
    multicast_root_distance{YType::uint32, "multicast-root-distance"}
        ,
    paths(this, {})
    , multicast_path(this, {})
    , parent_(this, {})
    , children_(this, {})
{

    yang_name = "reachable-details"; yang_parent_name = "reachability-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.len(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<children_.len(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    return root_distance.is_set
	|| multicast_root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.len(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<children_.len(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(root_distance.yfilter)
	|| ydk::is_set(multicast_root_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_distance.is_set || is_set(root_distance.yfilter)) leaf_name_data.push_back(root_distance.get_name_leafdata());
    if (multicast_root_distance.is_set || is_set(multicast_root_distance.yfilter)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multicast-path")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        ent_->parent = this;
        multicast_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "parent")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent>();
        ent_->parent = this;
        parent_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "children")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children>();
        ent_->parent = this;
        children_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : multicast_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : parent_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : children_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "root-distance")
    {
        root_distance = value;
        root_distance.value_namespace = name_space;
        root_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
        multicast_root_distance.value_namespace = name_space;
        multicast_root_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "root-distance")
    {
        root_distance.yfilter = yfilter;
    }
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "multicast-path" || name == "parent" || name == "children" || name == "root-distance" || name == "multicast-root-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::Parent()
    :
    neighbor_id{YType::str, "neighbor-id"},
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"}
{

    yang_name = "parent"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::~Parent()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| intermediate_pseudonode.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "intermediate-pseudonode")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::Children()
    :
    neighbor_id{YType::str, "neighbor-id"},
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"}
{

    yang_name = "children"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::~Children()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| intermediate_pseudonode.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "intermediate-pseudonode")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv6-link-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    if (is_presence_container) return true;
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Routes()
    :
    ipv6_route(this, {})
{

    yang_name = "ipv6-routes"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::~Ipv6Routes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_route.len(); index++)
    {
        if(ipv6_route[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route.len(); index++)
    {
        if(ipv6_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-route")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route>();
        ent_->parent = this;
        ipv6_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-route")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::Ipv6Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
        ,
    connected_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus>())
    , redistributed_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus>())
    , native_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus>())
    , per_level_advertising_detail(this, {})
{
    connected_status->parent = this;
    redistributed_status->parent = this;
    native_status->parent = this;

    yang_name = "ipv6-route"; yang_parent_name = "ipv6-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::~Ipv6Route()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_level_advertising_detail.len(); index++)
    {
        if(per_level_advertising_detail[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (connected_status !=  nullptr && connected_status->has_data())
	|| (redistributed_status !=  nullptr && redistributed_status->has_data())
	|| (native_status !=  nullptr && native_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::has_operation() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.len(); index++)
    {
        if(per_level_advertising_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (connected_status !=  nullptr && connected_status->has_operation())
	|| (redistributed_status !=  nullptr && redistributed_status->has_operation())
	|| (native_status !=  nullptr && native_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-status")
    {
        if(connected_status == nullptr)
        {
            connected_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus>();
        }
        return connected_status;
    }

    if(child_yang_name == "redistributed-status")
    {
        if(redistributed_status == nullptr)
        {
            redistributed_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus>();
        }
        return redistributed_status;
    }

    if(child_yang_name == "native-status")
    {
        if(native_status == nullptr)
        {
            native_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus>();
        }
        return native_status;
    }

    if(child_yang_name == "per-level-advertising-detail")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail>();
        ent_->parent = this;
        per_level_advertising_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_status != nullptr)
    {
        _children["connected-status"] = connected_status;
    }

    if(redistributed_status != nullptr)
    {
        _children["redistributed-status"] = redistributed_status;
    }

    if(native_status != nullptr)
    {
        _children["native-status"] = native_status;
    }

    count_ = 0;
    for (auto ent_ : per_level_advertising_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-status" || name == "redistributed-status" || name == "native-status" || name == "per-level-advertising-detail" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    connected_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails>())
{
    connected_details->parent = this;

    yang_name = "connected-status"; yang_parent_name = "ipv6-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::~ConnectedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (connected_details !=  nullptr && connected_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (connected_details !=  nullptr && connected_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-details")
    {
        if(connected_details == nullptr)
        {
            connected_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails>();
        }
        return connected_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_details != nullptr)
    {
        _children["connected-details"] = connected_details;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::ConnectedDetails()
    :
    interface(this, {})
{

    yang_name = "connected-details"; yang_parent_name = "connected-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::~ConnectedDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::Interface()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface"; yang_parent_name = "connected-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    redistribution_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails>())
{
    redistribution_details->parent = this;

    yang_name = "redistributed-status"; yang_parent_name = "ipv6-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::~RedistributedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (redistribution_details !=  nullptr && redistribution_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (redistribution_details !=  nullptr && redistribution_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-details")
    {
        if(redistribution_details == nullptr)
        {
            redistribution_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails>();
        }
        return redistribution_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redistribution_details != nullptr)
    {
        _children["redistribution-details"] = redistribution_details;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::RedistributionDetails()
    :
    isis_sh_route_redist_detail(this, {})
{

    yang_name = "redistribution-details"; yang_parent_name = "redistributed-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::~RedistributionDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_route_redist_detail.len(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.len(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-route-redist-detail")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail>();
        ent_->parent = this;
        isis_sh_route_redist_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_sh_route_redist_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-route-redist-detail")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::IsisShRouteRedistDetail()
    :
    level{YType::enumeration, "level"}
        ,
    owner(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>())
{
    owner->parent = this;

    yang_name = "isis-sh-route-redist-detail"; yang_parent_name = "redistribution-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::~IsisShRouteRedistDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (owner !=  nullptr && owner->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (owner !=  nullptr && owner->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-route-redist-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner")
    {
        if(owner == nullptr)
        {
            owner = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>();
        }
        return owner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(owner != nullptr)
    {
        _children["owner"] = owner;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::Owner()
    :
    protocol{YType::enumeration, "protocol"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    application_name{YType::str, "application-name"}
{

    yang_name = "owner"; yang_parent_name = "isis-sh-route-redist-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::~Owner()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| application_name.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(application_name.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "application-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    native_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails>())
{
    native_details->parent = this;

    yang_name = "native-status"; yang_parent_name = "ipv6-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::~NativeStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (native_details !=  nullptr && native_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (native_details !=  nullptr && native_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-details")
    {
        if(native_details == nullptr)
        {
            native_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails>();
        }
        return native_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(native_details != nullptr)
    {
        _children["native-details"] = native_details;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::NativeDetails()
    :
    priority{YType::enumeration, "priority"},
    local_label{YType::uint32, "local-label"}
        ,
    primary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary>())
    , backup(this, {})
{
    primary->parent = this;

    yang_name = "native-details"; yang_parent_name = "native-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::~NativeDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup.len(); index++)
    {
        if(backup[index]->has_data())
            return true;
    }
    return priority.is_set
	|| local_label.is_set
	|| (primary !=  nullptr && primary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::has_operation() const
{
    for (std::size_t index=0; index<backup.len(); index++)
    {
        if(backup[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "backup")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup>();
        ent_->parent = this;
        backup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : backup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "backup" || name == "priority" || name == "local-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Primary()
    :
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    is_external_metric{YType::boolean, "is-external-metric"},
    administrative_distance{YType::uint16, "administrative-distance"}
        ,
    paths(this, {})
    , ucmp_next_hop(this, {})
    , multicast_path(this, {})
    , srte_path(this, {})
    , explicit_path(this, {})
    , source(this, {})
    , multicast_source(this, {})
{

    yang_name = "primary"; yang_parent_name = "native-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::~Primary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    return origin.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| is_external_metric.is_set
	|| administrative_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast_metric.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(administrative_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.yfilter)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (administrative_distance.is_set || is_set(administrative_distance.yfilter)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop>();
        ent_->parent = this;
        ucmp_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multicast-path")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath>();
        ent_->parent = this;
        multicast_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srte-path")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath>();
        ent_->parent = this;
        srte_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "explicit-path")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath>();
        ent_->parent = this;
        explicit_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "source")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source>();
        ent_->parent = this;
        source.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multicast-source")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource>();
        ent_->parent = this;
        multicast_source.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ucmp_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : multicast_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srte_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : explicit_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : source.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : multicast_source.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
        multicast_metric.value_namespace = name_space;
        multicast_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
        administrative_distance.value_namespace = name_space;
        administrative_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "ucmp-next-hop" || name == "multicast-path" || name == "srte-path" || name == "explicit-path" || name == "source" || name == "multicast-source" || name == "origin" || name == "metric" || name == "multicast-metric" || name == "is-external-metric" || name == "administrative-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Paths()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::UcmpNextHop()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "ucmp-next-hop"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(total_ucmp_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.yfilter)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>();
        }
        return frr_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
        total_ucmp_distance.value_namespace = name_space;
        total_ucmp_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "total-ucmp-distance" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::MulticastPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::SrtePath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "srte-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::ExplicitPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| outgoing_label.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit>();
        ent_->parent = this;
        uloop_explicit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nnh")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh>();
        ent_->parent = this;
        nnh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frr_backup != nullptr)
    {
        _children["frr-backup"] = frr_backup;
    }

    count_ = 0;
    for (auto ent_ : uloop_explicit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nnh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"},
    outgoing_label{YType::uint32, "outgoing-label"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set
	|| outgoing_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(outgoing_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry>();
        ent_->parent = this;
        segment_routing_sid_value_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-repair")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair>();
        ent_->parent = this;
        backup_repair.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_sid_value_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_repair.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight" || name == "outgoing-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}


}
}

