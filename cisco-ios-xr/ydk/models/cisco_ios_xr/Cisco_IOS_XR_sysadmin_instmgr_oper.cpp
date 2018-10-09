
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_instmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_instmgr_oper {

Install::Install()
    :
    version(std::make_shared<Install::Version>())
    , inactive(std::make_shared<Install::Inactive>())
    , prepare(std::make_shared<Install::Prepare>())
    , package(std::make_shared<Install::Package>())
    , active(std::make_shared<Install::Active>())
    , superseded(std::make_shared<Install::Superseded>())
    , request(std::make_shared<Install::Request>())
    , repository(std::make_shared<Install::Repository>())
    , log(std::make_shared<Install::Log>())
    , which(std::make_shared<Install::Which>())
    , committed(std::make_shared<Install::Committed>())
{
    version->parent = this;
    inactive->parent = this;
    prepare->parent = this;
    package->parent = this;
    active->parent = this;
    superseded->parent = this;
    request->parent = this;
    repository->parent = this;
    log->parent = this;
    which->parent = this;
    committed->parent = this;

    yang_name = "install"; yang_parent_name = "Cisco-IOS-XR-sysadmin-instmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Install::~Install()
{
}

bool Install::has_data() const
{
    if (is_presence_container) return true;
    return (version !=  nullptr && version->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (prepare !=  nullptr && prepare->has_data())
	|| (package !=  nullptr && package->has_data())
	|| (active !=  nullptr && active->has_data())
	|| (superseded !=  nullptr && superseded->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (repository !=  nullptr && repository->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (which !=  nullptr && which->has_data())
	|| (committed !=  nullptr && committed->has_data());
}

bool Install::has_operation() const
{
    return is_set(yfilter)
	|| (version !=  nullptr && version->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (prepare !=  nullptr && prepare->has_operation())
	|| (package !=  nullptr && package->has_operation())
	|| (active !=  nullptr && active->has_operation())
	|| (superseded !=  nullptr && superseded->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (repository !=  nullptr && repository->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (which !=  nullptr && which->has_operation())
	|| (committed !=  nullptr && committed->has_operation());
}

std::string Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Install::Version>();
        }
        return version;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<Install::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "prepare")
    {
        if(prepare == nullptr)
        {
            prepare = std::make_shared<Install::Prepare>();
        }
        return prepare;
    }

    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::Package>();
        }
        return package;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Install::Active>();
        }
        return active;
    }

    if(child_yang_name == "superseded")
    {
        if(superseded == nullptr)
        {
            superseded = std::make_shared<Install::Superseded>();
        }
        return superseded;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Install::Request>();
        }
        return request;
    }

    if(child_yang_name == "repository")
    {
        if(repository == nullptr)
        {
            repository = std::make_shared<Install::Repository>();
        }
        return repository;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Install::Log>();
        }
        return log;
    }

    if(child_yang_name == "which")
    {
        if(which == nullptr)
        {
            which = std::make_shared<Install::Which>();
        }
        return which;
    }

    if(child_yang_name == "committed")
    {
        if(committed == nullptr)
        {
            committed = std::make_shared<Install::Committed>();
        }
        return committed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(version != nullptr)
    {
        children["version"] = version;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(prepare != nullptr)
    {
        children["prepare"] = prepare;
    }

    if(package != nullptr)
    {
        children["package"] = package;
    }

    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(superseded != nullptr)
    {
        children["superseded"] = superseded;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(repository != nullptr)
    {
        children["repository"] = repository;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    if(which != nullptr)
    {
        children["which"] = which;
    }

    if(committed != nullptr)
    {
        children["committed"] = committed;
    }

    return children;
}

void Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Install::clone_ptr() const
{
    return std::make_shared<Install>();
}

std::string Install::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Install::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Install::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Install::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "inactive" || name == "prepare" || name == "package" || name == "active" || name == "superseded" || name == "request" || name == "repository" || name == "log" || name == "which" || name == "committed")
        return true;
    return false;
}

Install::Version::Version()
    :
    img_info{YType::str, "img_info"}
{

    yang_name = "version"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Version::~Version()
{
}

bool Install::Version::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : img_info.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Version::has_operation() const
{
    for (auto const & leaf : img_info.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(img_info.yfilter);
}

std::string Install::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto img_info_name_datas = img_info.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), img_info_name_datas.begin(), img_info_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "img_info")
    {
        img_info.append(value);
    }
}

void Install::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "img_info")
    {
        img_info.yfilter = yfilter;
    }
}

bool Install::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "img_info")
        return true;
    return false;
}

Install::Inactive::Inactive()
    :
    si_inactive_output{YType::str, "si_inactive_output"}
        ,
    summary(std::make_shared<Install::Inactive::Summary>())
{
    summary->parent = this;

    yang_name = "inactive"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Inactive::~Inactive()
{
}

bool Install::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_inactive_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Install::Inactive::has_operation() const
{
    for (auto const & leaf : si_inactive_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_inactive_output.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_inactive_output_name_datas = si_inactive_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_inactive_output_name_datas.begin(), si_inactive_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::Inactive::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Install::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_inactive_output")
    {
        si_inactive_output.append(value);
    }
}

void Install::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_inactive_output")
    {
        si_inactive_output.yfilter = yfilter;
    }
}

bool Install::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "si_inactive_output")
        return true;
    return false;
}

Install::Inactive::Summary::Summary()
    :
    si_inactive_summary_output{YType::str, "si_inactive_summary_output"}
{

    yang_name = "summary"; yang_parent_name = "inactive"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Inactive::Summary::~Summary()
{
}

bool Install::Inactive::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_inactive_summary_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Inactive::Summary::has_operation() const
{
    for (auto const & leaf : si_inactive_summary_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_inactive_summary_output.yfilter);
}

std::string Install::Inactive::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/inactive/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Inactive::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Inactive::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_inactive_summary_output_name_datas = si_inactive_summary_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_inactive_summary_output_name_datas.begin(), si_inactive_summary_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Inactive::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Inactive::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Inactive::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_inactive_summary_output")
    {
        si_inactive_summary_output.append(value);
    }
}

void Install::Inactive::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_inactive_summary_output")
    {
        si_inactive_summary_output.yfilter = yfilter;
    }
}

bool Install::Inactive::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_inactive_summary_output")
        return true;
    return false;
}

Install::Prepare::Prepare()
    :
    si_prepare_output{YType::str, "si_prepare_output"}
{

    yang_name = "prepare"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Prepare::~Prepare()
{
}

bool Install::Prepare::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_prepare_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Prepare::has_operation() const
{
    for (auto const & leaf : si_prepare_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_prepare_output.yfilter);
}

std::string Install::Prepare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Prepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Prepare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_prepare_output_name_datas = si_prepare_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_prepare_output_name_datas.begin(), si_prepare_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Prepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Prepare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Prepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_prepare_output")
    {
        si_prepare_output.append(value);
    }
}

void Install::Prepare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_prepare_output")
    {
        si_prepare_output.yfilter = yfilter;
    }
}

bool Install::Prepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_prepare_output")
        return true;
    return false;
}

Install::Package::Package()
    :
    pkg_list(this, {"pkg_name"})
{

    yang_name = "package"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Package::~Package()
{
}

bool Install::Package::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pkg_list.len(); index++)
    {
        if(pkg_list[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Package::has_operation() const
{
    for (std::size_t index=0; index<pkg_list.len(); index++)
    {
        if(pkg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkg_list")
    {
        auto c = std::make_shared<Install::Package::PkgList>();
        c->parent = this;
        pkg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pkg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Install::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkg_list")
        return true;
    return false;
}

Install::Package::PkgList::PkgList()
    :
    pkg_name{YType::str, "pkg_name"},
    si_package_output{YType::str, "si_package_output"}
        ,
    detail(std::make_shared<Install::Package::PkgList::Detail>())
    , verbose(std::make_shared<Install::Package::PkgList::Verbose>())
{
    detail->parent = this;
    verbose->parent = this;

    yang_name = "pkg_list"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Package::PkgList::~PkgList()
{
}

bool Install::Package::PkgList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_package_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return pkg_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (verbose !=  nullptr && verbose->has_data());
}

bool Install::Package::PkgList::has_operation() const
{
    for (auto const & leaf : si_package_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pkg_name.yfilter)
	|| ydk::is_set(si_package_output.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (verbose !=  nullptr && verbose->has_operation());
}

std::string Install::Package::PkgList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/package/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Package::PkgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkg_list";
    ADD_KEY_TOKEN(pkg_name, "pkg_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Package::PkgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkg_name.is_set || is_set(pkg_name.yfilter)) leaf_name_data.push_back(pkg_name.get_name_leafdata());

    auto si_package_output_name_datas = si_package_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_package_output_name_datas.begin(), si_package_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Package::PkgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Install::Package::PkgList::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "verbose")
    {
        if(verbose == nullptr)
        {
            verbose = std::make_shared<Install::Package::PkgList::Verbose>();
        }
        return verbose;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Package::PkgList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(verbose != nullptr)
    {
        children["verbose"] = verbose;
    }

    return children;
}

void Install::Package::PkgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkg_name")
    {
        pkg_name = value;
        pkg_name.value_namespace = name_space;
        pkg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si_package_output")
    {
        si_package_output.append(value);
    }
}

void Install::Package::PkgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkg_name")
    {
        pkg_name.yfilter = yfilter;
    }
    if(value_path == "si_package_output")
    {
        si_package_output.yfilter = yfilter;
    }
}

bool Install::Package::PkgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "verbose" || name == "pkg_name" || name == "si_package_output")
        return true;
    return false;
}

Install::Package::PkgList::Detail::Detail()
    :
    si_package_detail_output{YType::str, "si_package_detail_output"}
{

    yang_name = "detail"; yang_parent_name = "pkg_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Package::PkgList::Detail::~Detail()
{
}

bool Install::Package::PkgList::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_package_detail_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Package::PkgList::Detail::has_operation() const
{
    for (auto const & leaf : si_package_detail_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_package_detail_output.yfilter);
}

std::string Install::Package::PkgList::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Package::PkgList::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_package_detail_output_name_datas = si_package_detail_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_package_detail_output_name_datas.begin(), si_package_detail_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Package::PkgList::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Package::PkgList::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Package::PkgList::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_package_detail_output")
    {
        si_package_detail_output.append(value);
    }
}

void Install::Package::PkgList::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_package_detail_output")
    {
        si_package_detail_output.yfilter = yfilter;
    }
}

bool Install::Package::PkgList::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_package_detail_output")
        return true;
    return false;
}

Install::Package::PkgList::Verbose::Verbose()
    :
    si_package_verbose_output{YType::str, "si_package_verbose_output"}
{

    yang_name = "verbose"; yang_parent_name = "pkg_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Package::PkgList::Verbose::~Verbose()
{
}

bool Install::Package::PkgList::Verbose::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_package_verbose_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Package::PkgList::Verbose::has_operation() const
{
    for (auto const & leaf : si_package_verbose_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_package_verbose_output.yfilter);
}

std::string Install::Package::PkgList::Verbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Package::PkgList::Verbose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_package_verbose_output_name_datas = si_package_verbose_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_package_verbose_output_name_datas.begin(), si_package_verbose_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Package::PkgList::Verbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Package::PkgList::Verbose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Package::PkgList::Verbose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_package_verbose_output")
    {
        si_package_verbose_output.append(value);
    }
}

void Install::Package::PkgList::Verbose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_package_verbose_output")
    {
        si_package_verbose_output.yfilter = yfilter;
    }
}

bool Install::Package::PkgList::Verbose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_package_verbose_output")
        return true;
    return false;
}

Install::Active::Active()
    :
    si_active_output{YType::str, "si_active_output"}
        ,
    summary(std::make_shared<Install::Active::Summary>())
{
    summary->parent = this;

    yang_name = "active"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Active::~Active()
{
}

bool Install::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_active_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Install::Active::has_operation() const
{
    for (auto const & leaf : si_active_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_active_output.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_active_output_name_datas = si_active_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_active_output_name_datas.begin(), si_active_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::Active::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Install::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_active_output")
    {
        si_active_output.append(value);
    }
}

void Install::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_active_output")
    {
        si_active_output.yfilter = yfilter;
    }
}

bool Install::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "si_active_output")
        return true;
    return false;
}

Install::Active::Summary::Summary()
    :
    si_active_summary_output{YType::str, "si_active_summary_output"}
{

    yang_name = "summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Active::Summary::~Summary()
{
}

bool Install::Active::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_active_summary_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Active::Summary::has_operation() const
{
    for (auto const & leaf : si_active_summary_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_active_summary_output.yfilter);
}

std::string Install::Active::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Active::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Active::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_active_summary_output_name_datas = si_active_summary_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_active_summary_output_name_datas.begin(), si_active_summary_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Active::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Active::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Active::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_active_summary_output")
    {
        si_active_summary_output.append(value);
    }
}

void Install::Active::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_active_summary_output")
    {
        si_active_summary_output.yfilter = yfilter;
    }
}

bool Install::Active::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_active_summary_output")
        return true;
    return false;
}

Install::Superseded::Superseded()
    :
    si_superseded_output{YType::str, "si_superseded_output"}
        ,
    summary(std::make_shared<Install::Superseded::Summary>())
{
    summary->parent = this;

    yang_name = "superseded"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Superseded::~Superseded()
{
}

bool Install::Superseded::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_superseded_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Install::Superseded::has_operation() const
{
    for (auto const & leaf : si_superseded_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_superseded_output.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::Superseded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Superseded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "superseded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Superseded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_superseded_output_name_datas = si_superseded_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_superseded_output_name_datas.begin(), si_superseded_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Superseded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::Superseded::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Superseded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Install::Superseded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_superseded_output")
    {
        si_superseded_output.append(value);
    }
}

void Install::Superseded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_superseded_output")
    {
        si_superseded_output.yfilter = yfilter;
    }
}

bool Install::Superseded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "si_superseded_output")
        return true;
    return false;
}

Install::Superseded::Summary::Summary()
    :
    si_superseded_summary_output{YType::str, "si_superseded_summary_output"}
{

    yang_name = "summary"; yang_parent_name = "superseded"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Superseded::Summary::~Summary()
{
}

bool Install::Superseded::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_superseded_summary_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Superseded::Summary::has_operation() const
{
    for (auto const & leaf : si_superseded_summary_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_superseded_summary_output.yfilter);
}

std::string Install::Superseded::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/superseded/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Superseded::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Superseded::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_superseded_summary_output_name_datas = si_superseded_summary_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_superseded_summary_output_name_datas.begin(), si_superseded_summary_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Superseded::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Superseded::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Superseded::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_superseded_summary_output")
    {
        si_superseded_summary_output.append(value);
    }
}

void Install::Superseded::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_superseded_summary_output")
    {
        si_superseded_summary_output.yfilter = yfilter;
    }
}

bool Install::Superseded::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_superseded_summary_output")
        return true;
    return false;
}

Install::Request::Request()
    :
    curr_inst_oper{YType::str, "curr_inst_oper"}
{

    yang_name = "request"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Request::~Request()
{
}

bool Install::Request::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : curr_inst_oper.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Request::has_operation() const
{
    for (auto const & leaf : curr_inst_oper.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(curr_inst_oper.yfilter);
}

std::string Install::Request::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto curr_inst_oper_name_datas = curr_inst_oper.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), curr_inst_oper_name_datas.begin(), curr_inst_oper_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curr_inst_oper")
    {
        curr_inst_oper.append(value);
    }
}

void Install::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curr_inst_oper")
    {
        curr_inst_oper.yfilter = yfilter;
    }
}

bool Install::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curr_inst_oper")
        return true;
    return false;
}

Install::Repository::Repository()
    :
    si_repository_output{YType::str, "si_repository_output"}
        ,
    all(std::make_shared<Install::Repository::All>())
{
    all->parent = this;

    yang_name = "repository"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Repository::~Repository()
{
}

bool Install::Repository::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_repository_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Install::Repository::has_operation() const
{
    for (auto const & leaf : si_repository_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_repository_output.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Install::Repository::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Repository::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repository";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Repository::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_repository_output_name_datas = si_repository_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_repository_output_name_datas.begin(), si_repository_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Repository::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Install::Repository::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Repository::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Install::Repository::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_repository_output")
    {
        si_repository_output.append(value);
    }
}

void Install::Repository::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_repository_output")
    {
        si_repository_output.yfilter = yfilter;
    }
}

bool Install::Repository::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "si_repository_output")
        return true;
    return false;
}

Install::Repository::All::All()
    :
    si_repository_all_output{YType::str, "si_repository_all_output"}
{

    yang_name = "all"; yang_parent_name = "repository"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Repository::All::~All()
{
}

bool Install::Repository::All::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_repository_all_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Repository::All::has_operation() const
{
    for (auto const & leaf : si_repository_all_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_repository_all_output.yfilter);
}

std::string Install::Repository::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/repository/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Repository::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Repository::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_repository_all_output_name_datas = si_repository_all_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_repository_all_output_name_datas.begin(), si_repository_all_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Repository::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Repository::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Repository::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_repository_all_output")
    {
        si_repository_all_output.append(value);
    }
}

void Install::Repository::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_repository_all_output")
    {
        si_repository_all_output.yfilter = yfilter;
    }
}

bool Install::Repository::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_repository_all_output")
        return true;
    return false;
}

Install::Log::Log()
    :
    si_log_output{YType::str, "si_log_output"}
        ,
    id(this, {"opid"})
    , reverse(std::make_shared<Install::Log::Reverse>())
    , detail(std::make_shared<Install::Log::Detail>())
{
    reverse->parent = this;
    detail->parent = this;

    yang_name = "log"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Log::~Log()
{
}

bool Install::Log::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    for (auto const & leaf : si_log_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (reverse !=  nullptr && reverse->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Install::Log::has_operation() const
{
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    for (auto const & leaf : si_log_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_log_output.yfilter)
	|| (reverse !=  nullptr && reverse->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Install::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_log_output_name_datas = si_log_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_output_name_datas.begin(), si_log_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Install::Log::Id>();
        c->parent = this;
        id.append(c);
        return c;
    }

    if(child_yang_name == "reverse")
    {
        if(reverse == nullptr)
        {
            reverse = std::make_shared<Install::Log::Reverse>();
        }
        return reverse;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Install::Log::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(reverse != nullptr)
    {
        children["reverse"] = reverse;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Install::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_log_output")
    {
        si_log_output.append(value);
    }
}

void Install::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_log_output")
    {
        si_log_output.yfilter = yfilter;
    }
}

bool Install::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "reverse" || name == "detail" || name == "si_log_output")
        return true;
    return false;
}

Install::Log::Id::Id()
    :
    opid{YType::uint32, "opid"},
    si_log_id_output{YType::str, "si_log_id_output"}
        ,
    detail(std::make_shared<Install::Log::Id::Detail>())
{
    detail->parent = this;

    yang_name = "id"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Log::Id::~Id()
{
}

bool Install::Log::Id::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_log_id_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return opid.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Install::Log::Id::has_operation() const
{
    for (auto const & leaf : si_log_id_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opid.yfilter)
	|| ydk::is_set(si_log_id_output.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Install::Log::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Log::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    ADD_KEY_TOKEN(opid, "opid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opid.is_set || is_set(opid.yfilter)) leaf_name_data.push_back(opid.get_name_leafdata());

    auto si_log_id_output_name_datas = si_log_id_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_id_output_name_datas.begin(), si_log_id_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Install::Log::Id::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Install::Log::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opid")
    {
        opid = value;
        opid.value_namespace = name_space;
        opid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si_log_id_output")
    {
        si_log_id_output.append(value);
    }
}

void Install::Log::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opid")
    {
        opid.yfilter = yfilter;
    }
    if(value_path == "si_log_id_output")
    {
        si_log_id_output.yfilter = yfilter;
    }
}

bool Install::Log::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "opid" || name == "si_log_id_output")
        return true;
    return false;
}

Install::Log::Id::Detail::Detail()
    :
    si_log_id_detail_output{YType::str, "si_log_id_detail_output"}
{

    yang_name = "detail"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Log::Id::Detail::~Detail()
{
}

bool Install::Log::Id::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_log_id_detail_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Log::Id::Detail::has_operation() const
{
    for (auto const & leaf : si_log_id_detail_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_log_id_detail_output.yfilter);
}

std::string Install::Log::Id::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::Id::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_log_id_detail_output_name_datas = si_log_id_detail_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_id_detail_output_name_datas.begin(), si_log_id_detail_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::Id::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::Id::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Log::Id::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_log_id_detail_output")
    {
        si_log_id_detail_output.append(value);
    }
}

void Install::Log::Id::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_log_id_detail_output")
    {
        si_log_id_detail_output.yfilter = yfilter;
    }
}

bool Install::Log::Id::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_log_id_detail_output")
        return true;
    return false;
}

Install::Log::Reverse::Reverse()
    :
    si_log_reverse_output{YType::str, "si_log_reverse_output"}
        ,
    detail(std::make_shared<Install::Log::Reverse::Detail>())
{
    detail->parent = this;

    yang_name = "reverse"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Log::Reverse::~Reverse()
{
}

bool Install::Log::Reverse::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_log_reverse_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (detail !=  nullptr && detail->has_data());
}

bool Install::Log::Reverse::has_operation() const
{
    for (auto const & leaf : si_log_reverse_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_log_reverse_output.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Install::Log::Reverse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Log::Reverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::Reverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_log_reverse_output_name_datas = si_log_reverse_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_reverse_output_name_datas.begin(), si_log_reverse_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::Reverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Install::Log::Reverse::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::Reverse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Install::Log::Reverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_log_reverse_output")
    {
        si_log_reverse_output.append(value);
    }
}

void Install::Log::Reverse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_log_reverse_output")
    {
        si_log_reverse_output.yfilter = yfilter;
    }
}

bool Install::Log::Reverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "si_log_reverse_output")
        return true;
    return false;
}

Install::Log::Reverse::Detail::Detail()
    :
    si_log_reverse_detail_output{YType::str, "si_log_reverse_detail_output"}
{

    yang_name = "detail"; yang_parent_name = "reverse"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Log::Reverse::Detail::~Detail()
{
}

bool Install::Log::Reverse::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_log_reverse_detail_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Log::Reverse::Detail::has_operation() const
{
    for (auto const & leaf : si_log_reverse_detail_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_log_reverse_detail_output.yfilter);
}

std::string Install::Log::Reverse::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/log/reverse/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Log::Reverse::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::Reverse::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_log_reverse_detail_output_name_datas = si_log_reverse_detail_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_reverse_detail_output_name_datas.begin(), si_log_reverse_detail_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::Reverse::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::Reverse::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Log::Reverse::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_log_reverse_detail_output")
    {
        si_log_reverse_detail_output.append(value);
    }
}

void Install::Log::Reverse::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_log_reverse_detail_output")
    {
        si_log_reverse_detail_output.yfilter = yfilter;
    }
}

bool Install::Log::Reverse::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_log_reverse_detail_output")
        return true;
    return false;
}

Install::Log::Detail::Detail()
    :
    si_log_detail_output{YType::str, "si_log_detail_output"}
{

    yang_name = "detail"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Log::Detail::~Detail()
{
}

bool Install::Log::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_log_detail_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Log::Detail::has_operation() const
{
    for (auto const & leaf : si_log_detail_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_log_detail_output.yfilter);
}

std::string Install::Log::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Log::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Log::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_log_detail_output_name_datas = si_log_detail_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_log_detail_output_name_datas.begin(), si_log_detail_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Log::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Log::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Log::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_log_detail_output")
    {
        si_log_detail_output.append(value);
    }
}

void Install::Log::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_log_detail_output")
    {
        si_log_detail_output.yfilter = yfilter;
    }
}

bool Install::Log::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_log_detail_output")
        return true;
    return false;
}

Install::Which::Which()
    :
    file_list(this, {"file_name"})
{

    yang_name = "which"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Which::~Which()
{
}

bool Install::Which::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<file_list.len(); index++)
    {
        if(file_list[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Which::has_operation() const
{
    for (std::size_t index=0; index<file_list.len(); index++)
    {
        if(file_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Which::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Which::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "which";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Which::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Which::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file_list")
    {
        auto c = std::make_shared<Install::Which::FileList>();
        c->parent = this;
        file_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Which::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : file_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Install::Which::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Which::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Which::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file_list")
        return true;
    return false;
}

Install::Which::FileList::FileList()
    :
    file_name{YType::str, "file_name"},
    si_which_output{YType::str, "si_which_output"}
        ,
    detail(std::make_shared<Install::Which::FileList::Detail>())
{
    detail->parent = this;

    yang_name = "file_list"; yang_parent_name = "which"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Which::FileList::~FileList()
{
}

bool Install::Which::FileList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_which_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return file_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Install::Which::FileList::has_operation() const
{
    for (auto const & leaf : si_which_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(si_which_output.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Install::Which::FileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/which/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Which::FileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file_list";
    ADD_KEY_TOKEN(file_name, "file_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Which::FileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());

    auto si_which_output_name_datas = si_which_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_which_output_name_datas.begin(), si_which_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Which::FileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Install::Which::FileList::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Which::FileList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Install::Which::FileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file_name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si_which_output")
    {
        si_which_output.append(value);
    }
}

void Install::Which::FileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file_name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "si_which_output")
    {
        si_which_output.yfilter = yfilter;
    }
}

bool Install::Which::FileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "file_name" || name == "si_which_output")
        return true;
    return false;
}

Install::Which::FileList::Detail::Detail()
    :
    si_which_detail_output{YType::str, "si_which_detail_output"}
{

    yang_name = "detail"; yang_parent_name = "file_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Which::FileList::Detail::~Detail()
{
}

bool Install::Which::FileList::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_which_detail_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Which::FileList::Detail::has_operation() const
{
    for (auto const & leaf : si_which_detail_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_which_detail_output.yfilter);
}

std::string Install::Which::FileList::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Which::FileList::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_which_detail_output_name_datas = si_which_detail_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_which_detail_output_name_datas.begin(), si_which_detail_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Which::FileList::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Which::FileList::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Which::FileList::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_which_detail_output")
    {
        si_which_detail_output.append(value);
    }
}

void Install::Which::FileList::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_which_detail_output")
    {
        si_which_detail_output.yfilter = yfilter;
    }
}

bool Install::Which::FileList::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_which_detail_output")
        return true;
    return false;
}

Install::Committed::Committed()
    :
    si_committed_output{YType::str, "si_committed_output"}
        ,
    summary(std::make_shared<Install::Committed::Summary>())
{
    summary->parent = this;

    yang_name = "committed"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Committed::~Committed()
{
}

bool Install::Committed::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_committed_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Install::Committed::has_operation() const
{
    for (auto const & leaf : si_committed_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_committed_output.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::Committed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Committed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_committed_output_name_datas = si_committed_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_committed_output_name_datas.begin(), si_committed_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::Committed::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Committed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Install::Committed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_committed_output")
    {
        si_committed_output.append(value);
    }
}

void Install::Committed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_committed_output")
    {
        si_committed_output.yfilter = yfilter;
    }
}

bool Install::Committed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "si_committed_output")
        return true;
    return false;
}

Install::Committed::Summary::Summary()
    :
    si_committed_summary_output{YType::str, "si_committed_summary_output"}
{

    yang_name = "summary"; yang_parent_name = "committed"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Committed::Summary::~Summary()
{
}

bool Install::Committed::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : si_committed_summary_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Committed::Summary::has_operation() const
{
    for (auto const & leaf : si_committed_summary_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(si_committed_summary_output.yfilter);
}

std::string Install::Committed::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-instmgr-oper:install/committed/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Committed::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Committed::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto si_committed_summary_output_name_datas = si_committed_summary_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), si_committed_summary_output_name_datas.begin(), si_committed_summary_output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Install::Committed::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Committed::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Install::Committed::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si_committed_summary_output")
    {
        si_committed_summary_output.append(value);
    }
}

void Install::Committed::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si_committed_summary_output")
    {
        si_committed_summary_output.yfilter = yfilter;
    }
}

bool Install::Committed::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si_committed_summary_output")
        return true;
    return false;
}


}
}

