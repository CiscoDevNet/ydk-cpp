
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_spirit_install_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_spirit_install_act {

InstallAdd::InstallAdd()
    :
    input(std::make_shared<InstallAdd::Input>())
    , output(std::make_shared<InstallAdd::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-add"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallAdd::~InstallAdd()
{
}

bool InstallAdd::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallAdd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallAdd::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallAdd::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallAdd::clone_ptr() const
{
    return std::make_shared<InstallAdd>();
}

std::string InstallAdd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallAdd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallAdd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallAdd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallAdd::Input::Input()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "input"; yang_parent_name = "install-add"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallAdd::Input::~Input()
{
}

bool InstallAdd::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallAdd::Input::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallAdd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-add/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallAdd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAdd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAdd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAdd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallAdd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallAdd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallAdd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallAdd::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-add"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallAdd::Output::~Output()
{
}

bool InstallAdd::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallAdd::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallAdd::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-add/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallAdd::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAdd::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAdd::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAdd::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallAdd::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallAdd::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallAdd::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallCommit::InstallCommit()
    :
    input(std::make_shared<InstallCommit::Input>())
    , output(std::make_shared<InstallCommit::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-commit"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallCommit::~InstallCommit()
{
}

bool InstallCommit::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallCommit::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallCommit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallCommit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallCommit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallCommit::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallCommit::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallCommit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallCommit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallCommit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallCommit::clone_ptr() const
{
    return std::make_shared<InstallCommit>();
}

std::string InstallCommit::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallCommit::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallCommit::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallCommit::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallCommit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallCommit::Input::Input()
    :
    sdr{YType::empty, "sdr"}
{

    yang_name = "input"; yang_parent_name = "install-commit"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallCommit::Input::~Input()
{
}

bool InstallCommit::Input::has_data() const
{
    if (is_presence_container) return true;
    return sdr.is_set;
}

bool InstallCommit::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter);
}

std::string InstallCommit::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-commit/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallCommit::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallCommit::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallCommit::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallCommit::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallCommit::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
}

void InstallCommit::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
}

bool InstallCommit::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

InstallCommit::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-commit"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallCommit::Output::~Output()
{
}

bool InstallCommit::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallCommit::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallCommit::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-commit/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallCommit::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallCommit::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallCommit::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallCommit::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallCommit::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallCommit::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallCommit::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallRemove::InstallRemove()
    :
    input(std::make_shared<InstallRemove::Input>())
    , output(std::make_shared<InstallRemove::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-remove"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallRemove::~InstallRemove()
{
}

bool InstallRemove::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallRemove::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallRemove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-remove";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallRemove::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallRemove::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallRemove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallRemove::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallRemove::clone_ptr() const
{
    return std::make_shared<InstallRemove>();
}

std::string InstallRemove::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallRemove::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallRemove::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallRemove::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallRemove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallRemove::Input::Input()
    :
    inactive{YType::empty, "inactive"},
    inactiveall{YType::empty, "inactiveall"}
        ,
    packages(std::make_shared<InstallRemove::Input::Packages>())
    , ids(std::make_shared<InstallRemove::Input::Ids>())
{
    packages->parent = this;
    ids->parent = this;

    yang_name = "input"; yang_parent_name = "install-remove"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallRemove::Input::~Input()
{
}

bool InstallRemove::Input::has_data() const
{
    if (is_presence_container) return true;
    return inactive.is_set
	|| inactiveall.is_set
	|| (packages !=  nullptr && packages->has_data())
	|| (ids !=  nullptr && ids->has_data());
}

bool InstallRemove::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(inactiveall.yfilter)
	|| (packages !=  nullptr && packages->has_operation())
	|| (ids !=  nullptr && ids->has_operation());
}

std::string InstallRemove::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-remove/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallRemove::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (inactiveall.is_set || is_set(inactiveall.yfilter)) leaf_name_data.push_back(inactiveall.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<InstallRemove::Input::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "ids")
    {
        if(ids == nullptr)
        {
            ids = std::make_shared<InstallRemove::Input::Ids>();
        }
        return ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    if(ids != nullptr)
    {
        _children["ids"] = ids;
    }

    return _children;
}

void InstallRemove::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactiveall")
    {
        inactiveall = value;
        inactiveall.value_namespace = name_space;
        inactiveall.value_namespace_prefix = name_space_prefix;
    }
}

void InstallRemove::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "inactiveall")
    {
        inactiveall.yfilter = yfilter;
    }
}

bool InstallRemove::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packages" || name == "ids" || name == "inactive" || name == "inactiveall")
        return true;
    return false;
}

InstallRemove::Input::Packages::Packages()
    :
    packagename{YType::str, "packagename"}
{

    yang_name = "packages"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallRemove::Input::Packages::~Packages()
{
}

bool InstallRemove::Input::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallRemove::Input::Packages::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallRemove::Input::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-remove/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallRemove::Input::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::Input::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::Input::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::Input::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallRemove::Input::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallRemove::Input::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallRemove::Input::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename")
        return true;
    return false;
}

InstallRemove::Input::Ids::Ids()
    :
    id_no{YType::str, "id-no"}
{

    yang_name = "ids"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallRemove::Input::Ids::~Ids()
{
}

bool InstallRemove::Input::Ids::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallRemove::Input::Ids::has_operation() const
{
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id_no.yfilter);
}

std::string InstallRemove::Input::Ids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-remove/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallRemove::Input::Ids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::Input::Ids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto id_no_name_datas = id_no.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_no_name_datas.begin(), id_no_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::Input::Ids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::Input::Ids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallRemove::Input::Ids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-no")
    {
        id_no.append(value);
    }
}

void InstallRemove::Input::Ids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-no")
    {
        id_no.yfilter = yfilter;
    }
}

bool InstallRemove::Input::Ids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-no")
        return true;
    return false;
}

InstallRemove::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-remove"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallRemove::Output::~Output()
{
}

bool InstallRemove::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallRemove::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallRemove::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-remove/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallRemove::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallRemove::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallRemove::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallRemove::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallPrepare::InstallPrepare()
    :
    input(std::make_shared<InstallPrepare::Input>())
    , output(std::make_shared<InstallPrepare::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-prepare"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallPrepare::~InstallPrepare()
{
}

bool InstallPrepare::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallPrepare::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallPrepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallPrepare::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallPrepare::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallPrepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallPrepare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallPrepare::clone_ptr() const
{
    return std::make_shared<InstallPrepare>();
}

std::string InstallPrepare::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallPrepare::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallPrepare::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallPrepare::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallPrepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallPrepare::Input::Input()
    :
    clean{YType::empty, "clean"}
        ,
    packages(std::make_shared<InstallPrepare::Input::Packages>())
    , ids(std::make_shared<InstallPrepare::Input::Ids>())
    , prepare_force(std::make_shared<InstallPrepare::Input::PrepareForce>())
{
    packages->parent = this;
    ids->parent = this;
    prepare_force->parent = this;

    yang_name = "input"; yang_parent_name = "install-prepare"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallPrepare::Input::~Input()
{
}

bool InstallPrepare::Input::has_data() const
{
    if (is_presence_container) return true;
    return clean.is_set
	|| (packages !=  nullptr && packages->has_data())
	|| (ids !=  nullptr && ids->has_data())
	|| (prepare_force !=  nullptr && prepare_force->has_data());
}

bool InstallPrepare::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clean.yfilter)
	|| (packages !=  nullptr && packages->has_operation())
	|| (ids !=  nullptr && ids->has_operation())
	|| (prepare_force !=  nullptr && prepare_force->has_operation());
}

std::string InstallPrepare::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallPrepare::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clean.is_set || is_set(clean.yfilter)) leaf_name_data.push_back(clean.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<InstallPrepare::Input::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "ids")
    {
        if(ids == nullptr)
        {
            ids = std::make_shared<InstallPrepare::Input::Ids>();
        }
        return ids;
    }

    if(child_yang_name == "prepare-force")
    {
        if(prepare_force == nullptr)
        {
            prepare_force = std::make_shared<InstallPrepare::Input::PrepareForce>();
        }
        return prepare_force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    if(ids != nullptr)
    {
        _children["ids"] = ids;
    }

    if(prepare_force != nullptr)
    {
        _children["prepare-force"] = prepare_force;
    }

    return _children;
}

void InstallPrepare::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clean")
    {
        clean = value;
        clean.value_namespace = name_space;
        clean.value_namespace_prefix = name_space_prefix;
    }
}

void InstallPrepare::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clean")
    {
        clean.yfilter = yfilter;
    }
}

bool InstallPrepare::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packages" || name == "ids" || name == "prepare-force" || name == "clean")
        return true;
    return false;
}

InstallPrepare::Input::Packages::Packages()
    :
    packagename{YType::str, "packagename"}
{

    yang_name = "packages"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallPrepare::Input::Packages::~Packages()
{
}

bool InstallPrepare::Input::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallPrepare::Input::Packages::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallPrepare::Input::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallPrepare::Input::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::Input::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::Input::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::Input::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallPrepare::Input::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallPrepare::Input::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallPrepare::Input::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename")
        return true;
    return false;
}

InstallPrepare::Input::Ids::Ids()
    :
    id_no{YType::str, "id-no"}
{

    yang_name = "ids"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallPrepare::Input::Ids::~Ids()
{
}

bool InstallPrepare::Input::Ids::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallPrepare::Input::Ids::has_operation() const
{
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id_no.yfilter);
}

std::string InstallPrepare::Input::Ids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallPrepare::Input::Ids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::Input::Ids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto id_no_name_datas = id_no.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_no_name_datas.begin(), id_no_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::Input::Ids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::Input::Ids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallPrepare::Input::Ids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-no")
    {
        id_no.append(value);
    }
}

void InstallPrepare::Input::Ids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-no")
    {
        id_no.yfilter = yfilter;
    }
}

bool InstallPrepare::Input::Ids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-no")
        return true;
    return false;
}

InstallPrepare::Input::PrepareForce::PrepareForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "prepare-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallPrepare::Input::PrepareForce::~PrepareForce()
{
}

bool InstallPrepare::Input::PrepareForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallPrepare::Input::PrepareForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallPrepare::Input::PrepareForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallPrepare::Input::PrepareForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::Input::PrepareForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::Input::PrepareForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::Input::PrepareForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallPrepare::Input::PrepareForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallPrepare::Input::PrepareForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallPrepare::Input::PrepareForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallPrepare::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-prepare"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallPrepare::Output::~Output()
{
}

bool InstallPrepare::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallPrepare::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallPrepare::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-prepare/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallPrepare::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallPrepare::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallPrepare::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallPrepare::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallPrepare::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallPrepare::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallPrepare::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallActivate::InstallActivate()
    :
    input(std::make_shared<InstallActivate::Input>())
    , output(std::make_shared<InstallActivate::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-activate"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallActivate::~InstallActivate()
{
}

bool InstallActivate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallActivate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallActivate::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallActivate::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallActivate::clone_ptr() const
{
    return std::make_shared<InstallActivate>();
}

std::string InstallActivate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallActivate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallActivate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallActivate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallActivate::Input::Input()
    :
    activate_prepared_pkg{YType::empty, "activate_prepared_pkg"},
    force{YType::empty, "force"},
    activate_reload{YType::empty, "activate-reload"},
    activate_reload_force{YType::empty, "activate-reload-force"},
    activate_warm_prepared_pkg{YType::empty, "activate_warm_prepared_pkg"},
    activate_warm_force_prepared_pkg{YType::empty, "activate_warm_force_prepared_pkg"},
    activate_warm_replace_prepared_pkg{YType::empty, "activate_warm_replace_prepared_pkg"},
    activate_warm_force_replace_prepared_pkg{YType::empty, "activate_warm_force_replace_prepared_pkg"}
        ,
    warm(std::make_shared<InstallActivate::Input::Warm>())
    , warm_force(std::make_shared<InstallActivate::Input::WarmForce>())
    , warm_replace(std::make_shared<InstallActivate::Input::WarmReplace>())
    , warm_replace_force(std::make_shared<InstallActivate::Input::WarmReplaceForce>())
    , reload(std::make_shared<InstallActivate::Input::Reload>())
    , reload_force(std::make_shared<InstallActivate::Input::ReloadForce>())
    , replace(std::make_shared<InstallActivate::Input::Replace>())
    , replace_force(std::make_shared<InstallActivate::Input::ReplaceForce>())
    , activate_force(std::make_shared<InstallActivate::Input::ActivateForce>())
    , packages(std::make_shared<InstallActivate::Input::Packages>())
    , ids(std::make_shared<InstallActivate::Input::Ids>())
{
    warm->parent = this;
    warm_force->parent = this;
    warm_replace->parent = this;
    warm_replace_force->parent = this;
    reload->parent = this;
    reload_force->parent = this;
    replace->parent = this;
    replace_force->parent = this;
    activate_force->parent = this;
    packages->parent = this;
    ids->parent = this;

    yang_name = "input"; yang_parent_name = "install-activate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::~Input()
{
}

bool InstallActivate::Input::has_data() const
{
    if (is_presence_container) return true;
    return activate_prepared_pkg.is_set
	|| force.is_set
	|| activate_reload.is_set
	|| activate_reload_force.is_set
	|| activate_warm_prepared_pkg.is_set
	|| activate_warm_force_prepared_pkg.is_set
	|| activate_warm_replace_prepared_pkg.is_set
	|| activate_warm_force_replace_prepared_pkg.is_set
	|| (warm !=  nullptr && warm->has_data())
	|| (warm_force !=  nullptr && warm_force->has_data())
	|| (warm_replace !=  nullptr && warm_replace->has_data())
	|| (warm_replace_force !=  nullptr && warm_replace_force->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (reload_force !=  nullptr && reload_force->has_data())
	|| (replace !=  nullptr && replace->has_data())
	|| (replace_force !=  nullptr && replace_force->has_data())
	|| (activate_force !=  nullptr && activate_force->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (ids !=  nullptr && ids->has_data());
}

bool InstallActivate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate_prepared_pkg.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(activate_reload.yfilter)
	|| ydk::is_set(activate_reload_force.yfilter)
	|| ydk::is_set(activate_warm_prepared_pkg.yfilter)
	|| ydk::is_set(activate_warm_force_prepared_pkg.yfilter)
	|| ydk::is_set(activate_warm_replace_prepared_pkg.yfilter)
	|| ydk::is_set(activate_warm_force_replace_prepared_pkg.yfilter)
	|| (warm !=  nullptr && warm->has_operation())
	|| (warm_force !=  nullptr && warm_force->has_operation())
	|| (warm_replace !=  nullptr && warm_replace->has_operation())
	|| (warm_replace_force !=  nullptr && warm_replace_force->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (reload_force !=  nullptr && reload_force->has_operation())
	|| (replace !=  nullptr && replace->has_operation())
	|| (replace_force !=  nullptr && replace_force->has_operation())
	|| (activate_force !=  nullptr && activate_force->has_operation())
	|| (packages !=  nullptr && packages->has_operation())
	|| (ids !=  nullptr && ids->has_operation());
}

std::string InstallActivate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate_prepared_pkg.is_set || is_set(activate_prepared_pkg.yfilter)) leaf_name_data.push_back(activate_prepared_pkg.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (activate_reload.is_set || is_set(activate_reload.yfilter)) leaf_name_data.push_back(activate_reload.get_name_leafdata());
    if (activate_reload_force.is_set || is_set(activate_reload_force.yfilter)) leaf_name_data.push_back(activate_reload_force.get_name_leafdata());
    if (activate_warm_prepared_pkg.is_set || is_set(activate_warm_prepared_pkg.yfilter)) leaf_name_data.push_back(activate_warm_prepared_pkg.get_name_leafdata());
    if (activate_warm_force_prepared_pkg.is_set || is_set(activate_warm_force_prepared_pkg.yfilter)) leaf_name_data.push_back(activate_warm_force_prepared_pkg.get_name_leafdata());
    if (activate_warm_replace_prepared_pkg.is_set || is_set(activate_warm_replace_prepared_pkg.yfilter)) leaf_name_data.push_back(activate_warm_replace_prepared_pkg.get_name_leafdata());
    if (activate_warm_force_replace_prepared_pkg.is_set || is_set(activate_warm_force_replace_prepared_pkg.yfilter)) leaf_name_data.push_back(activate_warm_force_replace_prepared_pkg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "warm")
    {
        if(warm == nullptr)
        {
            warm = std::make_shared<InstallActivate::Input::Warm>();
        }
        return warm;
    }

    if(child_yang_name == "warm-force")
    {
        if(warm_force == nullptr)
        {
            warm_force = std::make_shared<InstallActivate::Input::WarmForce>();
        }
        return warm_force;
    }

    if(child_yang_name == "warm-replace")
    {
        if(warm_replace == nullptr)
        {
            warm_replace = std::make_shared<InstallActivate::Input::WarmReplace>();
        }
        return warm_replace;
    }

    if(child_yang_name == "warm-replace-force")
    {
        if(warm_replace_force == nullptr)
        {
            warm_replace_force = std::make_shared<InstallActivate::Input::WarmReplaceForce>();
        }
        return warm_replace_force;
    }

    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<InstallActivate::Input::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "reload-force")
    {
        if(reload_force == nullptr)
        {
            reload_force = std::make_shared<InstallActivate::Input::ReloadForce>();
        }
        return reload_force;
    }

    if(child_yang_name == "replace")
    {
        if(replace == nullptr)
        {
            replace = std::make_shared<InstallActivate::Input::Replace>();
        }
        return replace;
    }

    if(child_yang_name == "replace-force")
    {
        if(replace_force == nullptr)
        {
            replace_force = std::make_shared<InstallActivate::Input::ReplaceForce>();
        }
        return replace_force;
    }

    if(child_yang_name == "activate-force")
    {
        if(activate_force == nullptr)
        {
            activate_force = std::make_shared<InstallActivate::Input::ActivateForce>();
        }
        return activate_force;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<InstallActivate::Input::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "ids")
    {
        if(ids == nullptr)
        {
            ids = std::make_shared<InstallActivate::Input::Ids>();
        }
        return ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(warm != nullptr)
    {
        _children["warm"] = warm;
    }

    if(warm_force != nullptr)
    {
        _children["warm-force"] = warm_force;
    }

    if(warm_replace != nullptr)
    {
        _children["warm-replace"] = warm_replace;
    }

    if(warm_replace_force != nullptr)
    {
        _children["warm-replace-force"] = warm_replace_force;
    }

    if(reload != nullptr)
    {
        _children["reload"] = reload;
    }

    if(reload_force != nullptr)
    {
        _children["reload-force"] = reload_force;
    }

    if(replace != nullptr)
    {
        _children["replace"] = replace;
    }

    if(replace_force != nullptr)
    {
        _children["replace-force"] = replace_force;
    }

    if(activate_force != nullptr)
    {
        _children["activate-force"] = activate_force;
    }

    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    if(ids != nullptr)
    {
        _children["ids"] = ids;
    }

    return _children;
}

void InstallActivate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate_prepared_pkg")
    {
        activate_prepared_pkg = value;
        activate_prepared_pkg.value_namespace = name_space;
        activate_prepared_pkg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-reload")
    {
        activate_reload = value;
        activate_reload.value_namespace = name_space;
        activate_reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-reload-force")
    {
        activate_reload_force = value;
        activate_reload_force.value_namespace = name_space;
        activate_reload_force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate_warm_prepared_pkg")
    {
        activate_warm_prepared_pkg = value;
        activate_warm_prepared_pkg.value_namespace = name_space;
        activate_warm_prepared_pkg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate_warm_force_prepared_pkg")
    {
        activate_warm_force_prepared_pkg = value;
        activate_warm_force_prepared_pkg.value_namespace = name_space;
        activate_warm_force_prepared_pkg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate_warm_replace_prepared_pkg")
    {
        activate_warm_replace_prepared_pkg = value;
        activate_warm_replace_prepared_pkg.value_namespace = name_space;
        activate_warm_replace_prepared_pkg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate_warm_force_replace_prepared_pkg")
    {
        activate_warm_force_replace_prepared_pkg = value;
        activate_warm_force_replace_prepared_pkg.value_namespace = name_space;
        activate_warm_force_replace_prepared_pkg.value_namespace_prefix = name_space_prefix;
    }
}

void InstallActivate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate_prepared_pkg")
    {
        activate_prepared_pkg.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "activate-reload")
    {
        activate_reload.yfilter = yfilter;
    }
    if(value_path == "activate-reload-force")
    {
        activate_reload_force.yfilter = yfilter;
    }
    if(value_path == "activate_warm_prepared_pkg")
    {
        activate_warm_prepared_pkg.yfilter = yfilter;
    }
    if(value_path == "activate_warm_force_prepared_pkg")
    {
        activate_warm_force_prepared_pkg.yfilter = yfilter;
    }
    if(value_path == "activate_warm_replace_prepared_pkg")
    {
        activate_warm_replace_prepared_pkg.yfilter = yfilter;
    }
    if(value_path == "activate_warm_force_replace_prepared_pkg")
    {
        activate_warm_force_replace_prepared_pkg.yfilter = yfilter;
    }
}

bool InstallActivate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "warm" || name == "warm-force" || name == "warm-replace" || name == "warm-replace-force" || name == "reload" || name == "reload-force" || name == "replace" || name == "replace-force" || name == "activate-force" || name == "packages" || name == "ids" || name == "activate_prepared_pkg" || name == "force" || name == "activate-reload" || name == "activate-reload-force" || name == "activate_warm_prepared_pkg" || name == "activate_warm_force_prepared_pkg" || name == "activate_warm_replace_prepared_pkg" || name == "activate_warm_force_replace_prepared_pkg")
        return true;
    return false;
}

InstallActivate::Input::Warm::Warm()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "warm"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::Warm::~Warm()
{
}

bool InstallActivate::Input::Warm::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::Warm::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::Warm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::Warm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::Warm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::Warm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::Warm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::Warm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::Warm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::Warm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::WarmForce::WarmForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "warm-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::WarmForce::~WarmForce()
{
}

bool InstallActivate::Input::WarmForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::WarmForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::WarmForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::WarmForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::WarmForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::WarmForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::WarmForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::WarmForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::WarmForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::WarmForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::WarmReplace::WarmReplace()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "warm-replace"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::WarmReplace::~WarmReplace()
{
}

bool InstallActivate::Input::WarmReplace::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::WarmReplace::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::WarmReplace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::WarmReplace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-replace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::WarmReplace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::WarmReplace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::WarmReplace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::WarmReplace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::WarmReplace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::WarmReplace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::WarmReplaceForce::WarmReplaceForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "warm-replace-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::WarmReplaceForce::~WarmReplaceForce()
{
}

bool InstallActivate::Input::WarmReplaceForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::WarmReplaceForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::WarmReplaceForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::WarmReplaceForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-replace-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::WarmReplaceForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::WarmReplaceForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::WarmReplaceForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::WarmReplaceForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::WarmReplaceForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::WarmReplaceForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::Reload::Reload()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "reload"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::Reload::~Reload()
{
}

bool InstallActivate::Input::Reload::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::Reload::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::ReloadForce::ReloadForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "reload-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::ReloadForce::~ReloadForce()
{
}

bool InstallActivate::Input::ReloadForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::ReloadForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::ReloadForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::ReloadForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::ReloadForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::ReloadForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::ReloadForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::ReloadForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::ReloadForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::ReloadForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::Replace::Replace()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "replace"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::Replace::~Replace()
{
}

bool InstallActivate::Input::Replace::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::Replace::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::Replace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::Replace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::Replace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::Replace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::Replace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::Replace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::Replace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::Replace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::ReplaceForce::ReplaceForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "replace-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::ReplaceForce::~ReplaceForce()
{
}

bool InstallActivate::Input::ReplaceForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::ReplaceForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::ReplaceForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::ReplaceForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::ReplaceForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::ReplaceForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::ReplaceForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::ReplaceForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::ReplaceForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::ReplaceForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::ActivateForce::ActivateForce()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "activate-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::ActivateForce::~ActivateForce()
{
}

bool InstallActivate::Input::ActivateForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::ActivateForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallActivate::Input::ActivateForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::ActivateForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::ActivateForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::ActivateForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::ActivateForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::ActivateForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallActivate::Input::ActivateForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallActivate::Input::ActivateForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallActivate::Input::Packages::Packages()
    :
    packagename{YType::str, "packagename"}
{

    yang_name = "packages"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::Packages::~Packages()
{
}

bool InstallActivate::Input::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::Packages::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallActivate::Input::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallActivate::Input::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallActivate::Input::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename")
        return true;
    return false;
}

InstallActivate::Input::Ids::Ids()
    :
    id_no{YType::str, "id-no"}
{

    yang_name = "ids"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::Ids::~Ids()
{
}

bool InstallActivate::Input::Ids::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallActivate::Input::Ids::has_operation() const
{
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id_no.yfilter);
}

std::string InstallActivate::Input::Ids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::Ids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::Ids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto id_no_name_datas = id_no.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_no_name_datas.begin(), id_no_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::Ids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::Ids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::Ids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-no")
    {
        id_no.append(value);
    }
}

void InstallActivate::Input::Ids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-no")
    {
        id_no.yfilter = yfilter;
    }
}

bool InstallActivate::Input::Ids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-no")
        return true;
    return false;
}

InstallActivate::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-activate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Output::~Output()
{
}

bool InstallActivate::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallActivate::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallActivate::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-activate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallActivate::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallActivate::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallDeactivate::InstallDeactivate()
    :
    input(std::make_shared<InstallDeactivate::Input>())
    , output(std::make_shared<InstallDeactivate::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-deactivate"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallDeactivate::~InstallDeactivate()
{
}

bool InstallDeactivate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallDeactivate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallDeactivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallDeactivate::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallDeactivate::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallDeactivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallDeactivate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallDeactivate::clone_ptr() const
{
    return std::make_shared<InstallDeactivate>();
}

std::string InstallDeactivate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallDeactivate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallDeactivate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallDeactivate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallDeactivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallDeactivate::Input::Input()
    :
    superseded{YType::empty, "superseded"}
        ,
    reload(std::make_shared<InstallDeactivate::Input::Reload>())
    , packages(std::make_shared<InstallDeactivate::Input::Packages>())
    , ids(std::make_shared<InstallDeactivate::Input::Ids>())
{
    reload->parent = this;
    packages->parent = this;
    ids->parent = this;

    yang_name = "input"; yang_parent_name = "install-deactivate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Input::~Input()
{
}

bool InstallDeactivate::Input::has_data() const
{
    if (is_presence_container) return true;
    return superseded.is_set
	|| (reload !=  nullptr && reload->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (ids !=  nullptr && ids->has_data());
}

bool InstallDeactivate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(superseded.yfilter)
	|| (reload !=  nullptr && reload->has_operation())
	|| (packages !=  nullptr && packages->has_operation())
	|| (ids !=  nullptr && ids->has_operation());
}

std::string InstallDeactivate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (superseded.is_set || is_set(superseded.yfilter)) leaf_name_data.push_back(superseded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<InstallDeactivate::Input::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<InstallDeactivate::Input::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "ids")
    {
        if(ids == nullptr)
        {
            ids = std::make_shared<InstallDeactivate::Input::Ids>();
        }
        return ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reload != nullptr)
    {
        _children["reload"] = reload;
    }

    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    if(ids != nullptr)
    {
        _children["ids"] = ids;
    }

    return _children;
}

void InstallDeactivate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "superseded")
    {
        superseded = value;
        superseded.value_namespace = name_space;
        superseded.value_namespace_prefix = name_space_prefix;
    }
}

void InstallDeactivate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "superseded")
    {
        superseded.yfilter = yfilter;
    }
}

bool InstallDeactivate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload" || name == "packages" || name == "ids" || name == "superseded")
        return true;
    return false;
}

InstallDeactivate::Input::Reload::Reload()
    :
    packagename{YType::str, "packagename"},
    ids{YType::str, "ids"}
{

    yang_name = "reload"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Input::Reload::~Reload()
{
}

bool InstallDeactivate::Input::Reload::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallDeactivate::Input::Reload::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(ids.yfilter);
}

std::string InstallDeactivate::Input::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Input::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Input::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    auto ids_name_datas = ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ids_name_datas.begin(), ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Input::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Input::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallDeactivate::Input::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
    if(value_path == "ids")
    {
        ids.append(value);
    }
}

void InstallDeactivate::Input::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "ids")
    {
        ids.yfilter = yfilter;
    }
}

bool InstallDeactivate::Input::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename" || name == "ids")
        return true;
    return false;
}

InstallDeactivate::Input::Packages::Packages()
    :
    packagename{YType::str, "packagename"}
{

    yang_name = "packages"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Input::Packages::~Packages()
{
}

bool InstallDeactivate::Input::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallDeactivate::Input::Packages::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallDeactivate::Input::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Input::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Input::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Input::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Input::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallDeactivate::Input::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallDeactivate::Input::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallDeactivate::Input::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename")
        return true;
    return false;
}

InstallDeactivate::Input::Ids::Ids()
    :
    id_no{YType::str, "id-no"}
{

    yang_name = "ids"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Input::Ids::~Ids()
{
}

bool InstallDeactivate::Input::Ids::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallDeactivate::Input::Ids::has_operation() const
{
    for (auto const & leaf : id_no.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id_no.yfilter);
}

std::string InstallDeactivate::Input::Ids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Input::Ids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Input::Ids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto id_no_name_datas = id_no.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_no_name_datas.begin(), id_no_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Input::Ids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Input::Ids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallDeactivate::Input::Ids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-no")
    {
        id_no.append(value);
    }
}

void InstallDeactivate::Input::Ids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-no")
    {
        id_no.yfilter = yfilter;
    }
}

bool InstallDeactivate::Input::Ids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-no")
        return true;
    return false;
}

InstallDeactivate::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-deactivate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Output::~Output()
{
}

bool InstallDeactivate::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallDeactivate::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallDeactivate::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-deactivate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallDeactivate::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallDeactivate::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallDeactivate::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallExtract::InstallExtract()
    :
    input(std::make_shared<InstallExtract::Input>())
    , output(std::make_shared<InstallExtract::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-extract"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallExtract::~InstallExtract()
{
}

bool InstallExtract::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallExtract::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallExtract::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-extract";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallExtract::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallExtract::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallExtract::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallExtract::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallExtract::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallExtract::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallExtract::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallExtract::clone_ptr() const
{
    return std::make_shared<InstallExtract>();
}

std::string InstallExtract::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallExtract::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallExtract::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallExtract::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallExtract::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallExtract::Input::Input()
    :
    packages(std::make_shared<InstallExtract::Input::Packages>())
{
    packages->parent = this;

    yang_name = "input"; yang_parent_name = "install-extract"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallExtract::Input::~Input()
{
}

bool InstallExtract::Input::has_data() const
{
    if (is_presence_container) return true;
    return (packages !=  nullptr && packages->has_data());
}

bool InstallExtract::Input::has_operation() const
{
    return is_set(yfilter)
	|| (packages !=  nullptr && packages->has_operation());
}

std::string InstallExtract::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-extract/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallExtract::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallExtract::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallExtract::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<InstallExtract::Input::Packages>();
        }
        return packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallExtract::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    return _children;
}

void InstallExtract::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallExtract::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InstallExtract::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packages")
        return true;
    return false;
}

InstallExtract::Input::Packages::Packages()
    :
    packagename{YType::str, "packagename"}
{

    yang_name = "packages"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallExtract::Input::Packages::~Packages()
{
}

bool InstallExtract::Input::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallExtract::Input::Packages::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallExtract::Input::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-extract/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallExtract::Input::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallExtract::Input::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallExtract::Input::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallExtract::Input::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallExtract::Input::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallExtract::Input::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallExtract::Input::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagename")
        return true;
    return false;
}

InstallExtract::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-extract"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallExtract::Output::~Output()
{
}

bool InstallExtract::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallExtract::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallExtract::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-extract/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallExtract::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallExtract::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallExtract::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallExtract::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallExtract::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallExtract::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallExtract::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallVerify::InstallVerify()
    :
    input(std::make_shared<InstallVerify::Input>())
    , output(std::make_shared<InstallVerify::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-verify"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallVerify::~InstallVerify()
{
}

bool InstallVerify::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallVerify::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallVerify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallVerify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallVerify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallVerify::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallVerify::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallVerify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallVerify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallVerify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallVerify::clone_ptr() const
{
    return std::make_shared<InstallVerify>();
}

std::string InstallVerify::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallVerify::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallVerify::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallVerify::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallVerify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallVerify::Input::Input()
    :
    location{YType::str, "location"}
{

    yang_name = "input"; yang_parent_name = "install-verify"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallVerify::Input::~Input()
{
}

bool InstallVerify::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InstallVerify::Input::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string InstallVerify::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-verify/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallVerify::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallVerify::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallVerify::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallVerify::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallVerify::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location.append(value);
    }
}

void InstallVerify::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool InstallVerify::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

InstallVerify::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-verify"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallVerify::Output::~Output()
{
}

bool InstallVerify::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallVerify::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallVerify::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-verify/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallVerify::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallVerify::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallVerify::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallVerify::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallVerify::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallVerify::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallVerify::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}

InstallUpdate::InstallUpdate()
    :
    input(std::make_shared<InstallUpdate::Input>())
    , output(std::make_shared<InstallUpdate::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "install-update"; yang_parent_name = "Cisco-IOS-XR-spirit-install-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallUpdate::~InstallUpdate()
{
}

bool InstallUpdate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InstallUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InstallUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallUpdate::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InstallUpdate::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void InstallUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallUpdate::clone_ptr() const
{
    return std::make_shared<InstallUpdate>();
}

std::string InstallUpdate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InstallUpdate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InstallUpdate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallUpdate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InstallUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InstallUpdate::Input::Input()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
        ,
    warm(std::make_shared<InstallUpdate::Input::Warm>())
    , warm_force(std::make_shared<InstallUpdate::Input::WarmForce>())
    , warm_replace(std::make_shared<InstallUpdate::Input::WarmReplace>())
    , warm_replace_force(std::make_shared<InstallUpdate::Input::WarmReplaceForce>())
    , force(std::make_shared<InstallUpdate::Input::Force>())
    , replace(std::make_shared<InstallUpdate::Input::Replace>())
    , replace_force(std::make_shared<InstallUpdate::Input::ReplaceForce>())
    , replace_commit(std::make_shared<InstallUpdate::Input::ReplaceCommit>())
    , replace_commit_force(std::make_shared<InstallUpdate::Input::ReplaceCommitForce>())
{
    warm->parent = this;
    warm_force->parent = this;
    warm_replace->parent = this;
    warm_replace_force->parent = this;
    force->parent = this;
    replace->parent = this;
    replace_force->parent = this;
    replace_commit->parent = this;
    replace_commit_force->parent = this;

    yang_name = "input"; yang_parent_name = "install-update"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::~Input()
{
}

bool InstallUpdate::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set
	|| (warm !=  nullptr && warm->has_data())
	|| (warm_force !=  nullptr && warm_force->has_data())
	|| (warm_replace !=  nullptr && warm_replace->has_data())
	|| (warm_replace_force !=  nullptr && warm_replace_force->has_data())
	|| (force !=  nullptr && force->has_data())
	|| (replace !=  nullptr && replace->has_data())
	|| (replace_force !=  nullptr && replace_force->has_data())
	|| (replace_commit !=  nullptr && replace_commit->has_data())
	|| (replace_commit_force !=  nullptr && replace_commit_force->has_data());
}

bool InstallUpdate::Input::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| (warm !=  nullptr && warm->has_operation())
	|| (warm_force !=  nullptr && warm_force->has_operation())
	|| (warm_replace !=  nullptr && warm_replace->has_operation())
	|| (warm_replace_force !=  nullptr && warm_replace_force->has_operation())
	|| (force !=  nullptr && force->has_operation())
	|| (replace !=  nullptr && replace->has_operation())
	|| (replace_force !=  nullptr && replace_force->has_operation())
	|| (replace_commit !=  nullptr && replace_commit->has_operation())
	|| (replace_commit_force !=  nullptr && replace_commit_force->has_operation());
}

std::string InstallUpdate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "warm")
    {
        if(warm == nullptr)
        {
            warm = std::make_shared<InstallUpdate::Input::Warm>();
        }
        return warm;
    }

    if(child_yang_name == "warm-force")
    {
        if(warm_force == nullptr)
        {
            warm_force = std::make_shared<InstallUpdate::Input::WarmForce>();
        }
        return warm_force;
    }

    if(child_yang_name == "warm-replace")
    {
        if(warm_replace == nullptr)
        {
            warm_replace = std::make_shared<InstallUpdate::Input::WarmReplace>();
        }
        return warm_replace;
    }

    if(child_yang_name == "warm-replace-force")
    {
        if(warm_replace_force == nullptr)
        {
            warm_replace_force = std::make_shared<InstallUpdate::Input::WarmReplaceForce>();
        }
        return warm_replace_force;
    }

    if(child_yang_name == "force")
    {
        if(force == nullptr)
        {
            force = std::make_shared<InstallUpdate::Input::Force>();
        }
        return force;
    }

    if(child_yang_name == "replace")
    {
        if(replace == nullptr)
        {
            replace = std::make_shared<InstallUpdate::Input::Replace>();
        }
        return replace;
    }

    if(child_yang_name == "replace-force")
    {
        if(replace_force == nullptr)
        {
            replace_force = std::make_shared<InstallUpdate::Input::ReplaceForce>();
        }
        return replace_force;
    }

    if(child_yang_name == "replace-commit")
    {
        if(replace_commit == nullptr)
        {
            replace_commit = std::make_shared<InstallUpdate::Input::ReplaceCommit>();
        }
        return replace_commit;
    }

    if(child_yang_name == "replace-commit-force")
    {
        if(replace_commit_force == nullptr)
        {
            replace_commit_force = std::make_shared<InstallUpdate::Input::ReplaceCommitForce>();
        }
        return replace_commit_force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(warm != nullptr)
    {
        _children["warm"] = warm;
    }

    if(warm_force != nullptr)
    {
        _children["warm-force"] = warm_force;
    }

    if(warm_replace != nullptr)
    {
        _children["warm-replace"] = warm_replace;
    }

    if(warm_replace_force != nullptr)
    {
        _children["warm-replace-force"] = warm_replace_force;
    }

    if(force != nullptr)
    {
        _children["force"] = force;
    }

    if(replace != nullptr)
    {
        _children["replace"] = replace;
    }

    if(replace_force != nullptr)
    {
        _children["replace-force"] = replace_force;
    }

    if(replace_commit != nullptr)
    {
        _children["replace-commit"] = replace_commit;
    }

    if(replace_commit_force != nullptr)
    {
        _children["replace-commit-force"] = replace_commit_force;
    }

    return _children;
}

void InstallUpdate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "warm" || name == "warm-force" || name == "warm-replace" || name == "warm-replace-force" || name == "force" || name == "replace" || name == "replace-force" || name == "replace-commit" || name == "replace-commit-force" || name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::Warm::Warm()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "warm"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::Warm::~Warm()
{
}

bool InstallUpdate::Input::Warm::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::Warm::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::Warm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::Warm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::Warm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::Warm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::Warm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::Warm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::Warm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::Warm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::WarmForce::WarmForce()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "warm-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::WarmForce::~WarmForce()
{
}

bool InstallUpdate::Input::WarmForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::WarmForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::WarmForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::WarmForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::WarmForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::WarmForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::WarmForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::WarmForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::WarmForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::WarmForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::WarmReplace::WarmReplace()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "warm-replace"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::WarmReplace::~WarmReplace()
{
}

bool InstallUpdate::Input::WarmReplace::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::WarmReplace::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::WarmReplace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::WarmReplace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-replace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::WarmReplace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::WarmReplace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::WarmReplace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::WarmReplace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::WarmReplace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::WarmReplace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::WarmReplaceForce::WarmReplaceForce()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "warm-replace-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::WarmReplaceForce::~WarmReplaceForce()
{
}

bool InstallUpdate::Input::WarmReplaceForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::WarmReplaceForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::WarmReplaceForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::WarmReplaceForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warm-replace-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::WarmReplaceForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::WarmReplaceForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::WarmReplaceForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::WarmReplaceForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::WarmReplaceForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::WarmReplaceForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::Force::Force()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::Force::~Force()
{
}

bool InstallUpdate::Input::Force::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::Force::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::Force::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::Force::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::Force::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::Force::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::Force::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::Force::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::Force::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::Force::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::Replace::Replace()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "replace"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::Replace::~Replace()
{
}

bool InstallUpdate::Input::Replace::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::Replace::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::Replace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::Replace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::Replace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::Replace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::Replace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::Replace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::Replace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::Replace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::ReplaceForce::ReplaceForce()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "replace-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::ReplaceForce::~ReplaceForce()
{
}

bool InstallUpdate::Input::ReplaceForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::ReplaceForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::ReplaceForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::ReplaceForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::ReplaceForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::ReplaceForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::ReplaceForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::ReplaceForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::ReplaceForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::ReplaceForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::ReplaceCommit::ReplaceCommit()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "replace-commit"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::ReplaceCommit::~ReplaceCommit()
{
}

bool InstallUpdate::Input::ReplaceCommit::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::ReplaceCommit::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::ReplaceCommit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::ReplaceCommit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace-commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::ReplaceCommit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::ReplaceCommit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::ReplaceCommit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::ReplaceCommit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::ReplaceCommit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::ReplaceCommit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Input::ReplaceCommitForce::ReplaceCommitForce()
    :
    packagepath{YType::str, "packagepath"},
    packagename{YType::str, "packagename"}
{

    yang_name = "replace-commit-force"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Input::ReplaceCommitForce::~ReplaceCommitForce()
{
}

bool InstallUpdate::Input::ReplaceCommitForce::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return packagepath.is_set;
}

bool InstallUpdate::Input::ReplaceCommitForce::has_operation() const
{
    for (auto const & leaf : packagename.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter);
}

std::string InstallUpdate::Input::ReplaceCommitForce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/input/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Input::ReplaceCommitForce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replace-commit-force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Input::ReplaceCommitForce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());

    auto packagename_name_datas = packagename.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packagename_name_datas.begin(), packagename_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Input::ReplaceCommitForce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Input::ReplaceCommitForce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Input::ReplaceCommitForce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packagepath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagename")
    {
        packagename.append(value);
    }
}

void InstallUpdate::Input::ReplaceCommitForce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packagepath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packagename")
    {
        packagename.yfilter = yfilter;
    }
}

bool InstallUpdate::Input::ReplaceCommitForce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packagepath" || name == "packagename")
        return true;
    return false;
}

InstallUpdate::Output::Output()
    :
    op_id{YType::str, "op-id"},
    error{YType::str, "Error"}
{

    yang_name = "output"; yang_parent_name = "install-update"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallUpdate::Output::~Output()
{
}

bool InstallUpdate::Output::has_data() const
{
    if (is_presence_container) return true;
    return op_id.is_set
	|| error.is_set;
}

bool InstallUpdate::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_id.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string InstallUpdate::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-act:install-update/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallUpdate::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallUpdate::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_id.is_set || is_set(op_id.yfilter)) leaf_name_data.push_back(op_id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallUpdate::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallUpdate::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallUpdate::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-id")
    {
        op_id = value;
        op_id.value_namespace = name_space;
        op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void InstallUpdate::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-id")
    {
        op_id.yfilter = yfilter;
    }
    if(value_path == "Error")
    {
        error.yfilter = yfilter;
    }
}

bool InstallUpdate::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-id" || name == "Error")
        return true;
    return false;
}


}
}

